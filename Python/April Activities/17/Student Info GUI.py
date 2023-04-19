# Create a program in GUI that consists of two frames where frame 1 contains Name in Lastname, firstname, middle name entries and Frame 2 contains 
# education with elementary, secondary, and tertiary entries with a button at the bottom with text "submit"

import tkinter as tk
window = tk.Tk()
frame_a = tk.Frame()
frame_b = tk.Frame()
label_a = tk.Label(master=frame_a, text="Student Information")
label_a.pack()
frame_a.pack()
entrylastName = tk.Entry()
entrylastName.insert(0, "Last Name: ")
entrylastName.pack()
entrymiddleName = tk.Entry()
entrymiddleName.insert(0, "Middle Name: ")
entrymiddleName.pack()
entryfirstName = tk.Entry()
entryfirstName.insert(0, "First Name: ")
entryfirstName.pack()
label_b = tk.Label(master=frame_b, text="Education Providor")
label_b.pack()
frame_b.pack()
entryElementary = tk.Entry()
entryElementary.insert(0, "Elementary: ")
entryElementary.pack()
entrySecondary = tk.Entry()
entrySecondary.insert(0, "Secondary: ")
entrySecondary.pack()
entryTertiary = tk.Entry()
entryTertiary.insert(0, "First Name: ")
entryTertiary.pack()
button = tk.Button(
    master=window,
    text="Submit",
    width=25,
    height=5,
    bg="Gray",
    fg="white",
)
button.pack(expand=True)
window.mainloop()