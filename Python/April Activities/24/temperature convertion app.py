# Create an app that allows the user to input temperature in degrees farenheit and push a button to convert that temperature to degrees Celsius

import tkinter as tk

def converter():
    value = int(celsiusTemp['text'])
    farenheitTempe = int(farenheitTemp.get())
    celsiusTemp["text"] = f"{farenheitTempe* 5 / 9}"    
    
window = tk.Tk()

farenheitTemp= tk.Entry(width=12)
farenheitTemp.grid(row=0, column=0, sticky= "nsew")

tempconv_button = tk.Button(master=window, text = "Convert", command=converter, width = 15,)
tempconv_button.grid(row=0, column=1, sticky= "nsew")

celsiusTemp = tk.Label(text="0", height=4, width= 18)
celsiusTemp.grid(row=0, column=2, sticky= "nsew")

window.mainloop()