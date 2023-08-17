import tkinter as tk
import sqlite3

window = tk.Tk()

# Create a database or connect to an existing one
student_info = sqlite3.connect('StudentInfo.db')

def submit():
    # Create cursor
    c = student_info.cursor()
    # Insert Into Table
    c.execute("INSERT INTO Student_Info VALUES (:Student_Name, :Course, :Year)",
              {
                  'Student_Name': name_entry.get(),
                  'Course': course_entry.get(),
                  'Year': year_entry.get()
              })
    # Commit Changes
    student_info.commit()

def close_connection():
    # Close Connection
    student_info.close()
    window.destroy()

name_label = tk.Label(master=window, text="Student Name: ")
name_label.grid(row=0, column=0, sticky='nsew')

name_entry = tk.Entry(master=window)
name_entry.grid(row=0, column=1, sticky='nsew')

course_label = tk.Label(master=window, text="Course: ")
course_label.grid(row=1, column=0, sticky='nsew')

course_entry = tk.Entry(master=window)
course_entry.grid(row=1, column=1, sticky='nsew')

year_label = tk.Label(master=window, text="Year: ")
year_label.grid(row=2, column=0, sticky="nsew")

year_entry = tk.Entry(master=window)
year_entry.grid(row=2, column=1, sticky='nsew')

save_button = tk.Button(master=window, text="Save Data", width=15, command=submit)
save_button.grid(row=3, column=1, sticky="nsew")

close_button = tk.Button(master=window, text="Close", width=15, command=close_connection)
close_button.grid(row=4, column=1, sticky="nsew")

window.mainloop()
