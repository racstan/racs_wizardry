import tkinter as tk
import json

with open("login.json") as f:
    credentials= json.load(f)

def on_login_button_click():
    username = username_entry.get()
    password = password_entry.get()
    if username in credentials:
        if password == credentials[username]:
            login_window.withdraw()
            window.deiconify()
            welcome_label = tk.Label(window, text=f"Welcome, you have successfully logged in as {username}")
            welcome_label.pack()
        else:
            error_label.config(text="Invalid password")
    else:
        error_label.config(text="Invalid username or password")

login_window = tk.Tk()
login_window.geometry("300x150")

window= tk.Toplevel(login_window)
window.geometry("450x400")
window.withdraw()

username_label = tk.Label(login_window,text="Username")
username_label.pack()
username_entry = tk.Entry(login_window)
username_entry.pack()

password_label= tk.Label(login_window,text="Password")
password_label.pack()
password_entry = tk.Entry(login_window)
password_entry.pack()

login_button = tk.Button(login_window,text="Login", command=on_login_button_click)
login_button.pack()

error_label = tk.Label(login_window,fg='red')
error_label.pack()

login_window.mainloop()