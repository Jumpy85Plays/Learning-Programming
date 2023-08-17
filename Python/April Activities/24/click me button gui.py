import tkinter as tk

window = tk.Tk()
i = 0
def handle_click(event):
    print("The button was clicked!")
    i=+ int('1')
    print("The button has been pressed", i , 'times.')

button = tk.Button(text = "Click me!")
button.pack()
button.bind("<Button-1>", handle_click)

window.mainloop()