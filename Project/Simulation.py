import simpy
import datetime
import tkinter as tk
from tkinter import messagebox
import random
import time
from threading import Thread

# Default task durations in days
DEFAULT_TASK_DURATIONS = {
    'site_preparation': 5,
    'foundation_work': 10,
    'framing': 15,
    'roofing': 10,
    'electrical': 7,
    'plumbing': 7,
    'interior_finish': 20,
}

# Performance stats and their effects on duration
PERFORMANCE_STATS = {
    "Did a lot of work": 0.5,  # Half a day ahead
    "Normal day of work": 1,    # No change
    "Not efficient work day": 1.5  # Half a day behind
}

class ConstructionSite:
    def __init__(self, env, task_durations, start_date, log_function, update_progress_function, num_workers):
        self.env = env
        self.task_durations = task_durations
        self.start_date = start_date
        self.log_function = log_function
        self.update_progress_function = update_progress_function
        self.num_workers = num_workers
        self.workers = simpy.Resource(env, num_workers)
        self.current_end_date = start_date
        self.total_days = sum(task_durations.values())
        self.days_done = 0

    def task(self, name):
        original_duration = self.task_durations.get(name, 0)
        self.log_function(f"=== {name} starting at {self.start_date + datetime.timedelta(days=self.env.now)} ===")
        for day in range(original_duration):
            performance, factor = random.choice(list(PERFORMANCE_STATS.items()))
            days_spent = factor
            self.days_done += days_spent
            self.log_daily_performance(name, day + 1, performance)
            self.update_progress_function(self.days_done, self.total_days)
            yield self.env.timeout(1)  # Simulate one day of work

        end_time = self.start_date + datetime.timedelta(days=self.env.now)
        self.current_end_date = end_time
        self.log_function(f"=== {name} completed at {end_time.date()} ===", bold=True)

    def log_daily_performance(self, task_name, day, performance):
        log_time = self.start_date + datetime.timedelta(days=self.env.now)
        log_message = f'{task_name} - Day {day} ({log_time.date()}): {performance}'
        self.log_function(log_message)
        time.sleep(0.5)  # 500ms delay between logs

def construction_process(env, site, task_name):
    # Request workers for the task
    with site.workers.request() as worker_req:
        yield worker_req
        yield env.process(site.task(task_name))

def setup(env, site, task_names):
    # Sequentially schedule tasks
    for task_name in task_names:
        env.process(construction_process(env, site, task_name))
        # Wait for the completion of the current task before starting the next one
        while True:
            if env.now >= site.task_durations.get(task_name, 0):
                break
            yield env.timeout(1)  # Check every day if the current task is completed

# Create the environment and run the simulation
def run_simulation(task_durations, task_names, start_date, log_function, update_progress_function, num_workers):
    env = simpy.Environment()
    construction_site = ConstructionSite(env, task_durations, start_date, log_function, update_progress_function, num_workers)
    env.process(setup(env, construction_site, task_names))
    env.run()

    # Once the simulation is done, indicate that construction is finished
    log_function("=== Construction Finished ===", bold=True)
    update_progress_function(construction_site.total_days, construction_site.total_days)

# GUI application for main inputs
class ConstructionApp(tk.Tk):
    def __init__(self):
        super().__init__()
        self.title("Construction Site Simulation")
        self.geometry("400x500")

        self.task_durations = DEFAULT_TASK_DURATIONS.copy()
        self.task_entries = {}

        tk.Label(self, text="Enter the duration for each task (in days):").pack(pady=10)

        for task in DEFAULT_TASK_DURATIONS.keys():
            frame = tk.Frame(self)
            frame.pack(pady=5)

            tk.Label(frame, text=f"{task}:").pack(side=tk.LEFT)
            entry = tk.Entry(frame)
            entry.insert(0, str(DEFAULT_TASK_DURATIONS[task]))
            entry.pack(side=tk.RIGHT)
            self.task_entries[task] = entry

        tk.Label(self, text="Enter the number of workers:").pack(pady=10)
        self.num_workers_entry = tk.Entry(self)
        self.num_workers_entry.insert(0, str(5))  # Default value
        self.num_workers_entry.pack(pady=5)

        tk.Label(self, text="Enter the start date (YYYY-MM-DD):").pack(pady=10)
        self.start_date_entry = tk.Entry(self)
        self.start_date_entry.pack(pady=5)

        tk.Button(self, text="Run Simulation", command=self.run_simulation).pack(pady=20)

    def run_simulation(self):
        try:
            for task, entry in self.task_entries.items():
                self.task_durations[task] = int(entry.get())
            num_workers = int(self.num_workers_entry.get())
            start_date_str = self.start_date_entry.get()
            start_date = datetime.datetime.strptime(start_date_str, '%Y-%m-%d')

            log_window = LogWindow()
            task_names = list(self.task_durations.keys())

            # Run simulation in a separate thread to keep the GUI responsive
            simulation_thread = Thread(target=run_simulation, args=(self.task_durations, task_names, start_date, log_window.log, log_window.update_progress, num_workers))
            simulation_thread.start()

        except ValueError as e:
            messagebox.showerror("Input Error", f"Invalid input: {e}")

# GUI application for logging
class LogWindow(tk.Toplevel):
    def __init__(self):
        super().__init__()
        self.title("Construction Logs and Progress")
        self.geometry("500x400")

        self.log_text = tk.Text(self, state='disabled', width=60, height=20)
        self.log_text.pack(pady=10)

        self.progress_label = tk.Label(self, text="Progress: 0%")
        self.progress_label.pack(pady=10)

    def log(self, message, bold=False):
        self.log_text.configure(state='normal')
        if bold:
            self.log_text.insert(tk.END, message + '\n', 'bold')
        else:
            self.log_text.insert(tk.END, message + '\n')
        self.log_text.configure(state='disabled')
        self.log_text.see(tk.END)
        
        if bold:
            self.log_text.tag_configure('bold', font=('Helvetica', 12, 'bold'))
    def update_progress(self, days_done, total_days):
        progress = (days_done / total_days) * 100
        self.progress_label.configure(text=f"Progress: {progress:.2f}% - {total_days - days_done:.2f} days left")

# Main function
if __name__ == '__main__':
    app = ConstructionApp()
    app.mainloop()
