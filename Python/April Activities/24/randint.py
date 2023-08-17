import tkinter as tk
import random

def roll():
    value = int(lbl_value["text"])
    lbl_value['text'] = f"{random.randint(1, 6)}"
    

window = tk.Tk()

roll_button = tk.Button(master=window, text = "Roll", command=roll, width = 15,)
roll_button.grid(row=0, column=0, sticky= "nsew")
lbl_value = tk.Label(master=window, text='0', width = 15,)
lbl_value.grid(row=1, column=0)

window.mainloop()