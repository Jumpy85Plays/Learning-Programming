import tkinter as tk
window = tk.Tk()
window.title("My first GUI Program")
greeting = tk.Label(text="Python rocks")
greeting = tk.Label(text="Enter your name")
entry = tk.Entry(width=50)
greeting.pack()
entry.pack()
window.mainloop()