import tkinter as tk

class Application(tk.Frame):
    def __init__(self, master=None):
        super().__init__(master)
        self.master = master
        self.pack()
        self.create_widgets()

    def create_widgets(self):
        # create Frame 1
        self.frame1 = tk.Frame(self)
        self.frame1.pack()

        self.last_name_label = tk.Label(self.frame1, text="Last Name:")
        self.last_name_label.pack(side="left")
        self.last_name_entry = tk.Entry(self.frame1)
        self.last_name_entry.pack(side="left")

        self.first_name_label = tk.Label(self.frame1, text="First Name:")
        self.first_name_label.pack(side="left")
        self.first_name_entry = tk.Entry(self.frame1)
        self.first_name_entry.pack(side="left")

        self.middle_name_label = tk.Label(self.frame1, text="Middle Name:")
        self.middle_name_label.pack(side="left")
        self.middle_name_entry = tk.Entry(self.frame1)
        self.middle_name_entry.pack(side="left")

        # create Frame 2
        self.frame2 = tk.Frame(self)
        self.frame2.pack()

        self.elementary_label = tk.Label(self.frame2, text="Elementary:")
        self.elementary_label.pack(side="left")
        self.elementary_entry = tk.Entry(self.frame2)
        self.elementary_entry.pack(side="left")

        self.secondary_label = tk.Label(self.frame2, text="Secondary:")
        self.secondary_label.pack(side="left")
        self.secondary_entry = tk.Entry(self.frame2)
        self.secondary_entry.pack(side="left")

        self.tertiary_label = tk.Label(self.frame2, text="Tertiary:")
        self.tertiary_label.pack(side="left")
        self.tertiary_entry = tk.Entry(self.frame2)
        self.tertiary_entry.pack(side="left")

        # create Submit button
        self.submit_button = tk.Button(self, text="Submit", command=self.submit)
        self.submit_button.pack()

    def submit(self):
        # code to process the input values goes here
        pass

root = tk.Tk()
app = Application(master=root)
app.mainloop()
