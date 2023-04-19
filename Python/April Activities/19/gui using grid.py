import tkinter as tk

window = tk.Tk()

for i in range(5):
    for j in range(5):
        frame = tk.Frame(
            master=window,
            relief=tk.RAISED,
            borderwidth=1
        )
        frame.grid(row=i, column=j)
        label = tk.Label(master=frame, text=f"Row {i+1}\nColumn {j+1}", bg="Blue", fg="White")
        label.pack()

window.mainloop()