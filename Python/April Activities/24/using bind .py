import tkinter as tk

window = tk.Tk()

def handle_keypress(event):
    """Print the character associated to the key pressed"""
    Label =tk.Label(text = event.char)
    Label.pack()
    
window.bind("<Key>", handle_keypress)
window.mainloop()