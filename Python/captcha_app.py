import random
from tkinter import *
from tkinter import messagebox

text = 'abcdefghijklmnopqrstuvwxyz0123456789'
window = Tk()
window.title("Captcha App")
window.geometry("300x100")   #You can set the window according to your use
captcha = StringVar()
user_input = StringVar()

def set_captcha():
    s = random.choices(text, k = 6)  #value of k decides the length of captcha
    captcha.set(''.join(s))

def check():
    if captcha.get() == user_input.get():
        messagebox.showinfo("Success", "Correct")
    else:
        messagebox.showinfo("Error", "Incorrect")
    set_captcha()

Label(window, textvariable = captcha, font = "Arial 16 bold").pack()
Entry(window, textvariable = user_input, font = "Arial 16 bold").pack(ipady = 5)
Button(window, command = check, text = 'Check', font = "Arial 10").pack() #you can change the font of title, captcha given and user input
set_captcha()
window.mainloop()