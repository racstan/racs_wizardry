import tkinter as tk
import random
temp=[]
count =1
def on_random_button_click():
    global count
    random_number = random.randint(0,100)
    temp.append(random_number)
    random_button_label.config(text = f"({count}) The random number is "+ str(random_number))
    count+=1
    list_of_num.delete(0,tk.END)
    for num in temp:
        list_of_num.insert(tk.END, num)

def on_sum_button_click():
    sum =0
    avg =0
    countNum=0
    for num in temp:
        sum+=num
        countNum+=1
    avg= sum/countNum
    sum_button_label.config(text=f"The sum of {countNum} random numbers is {sum}and average is {avg}")

def on_hal_button_click():
    highest_num = max(temp)
    lowest_num = min(temp)
    hal_label.config(text=f"The highest number is {highest_num} and the lowest number is {lowest_num}")

window = tk.Tk()
window.geometry("400x400")

random_button_label = tk.Label(window,text="Random number generator program")
random_button_label.pack()

random_button = tk.Button(window,text="Generate random number",command = on_random_button_click)
random_button.pack()

sum_button_label = tk.Label(window, text="Sum and average of the random numbers is")
sum_button_label.pack()

sum_button = tk.Button(window,text="Click to get sum and avg", command = on_sum_button_click)
sum_button.pack()

hal_label = tk.Label(window, text="The Highest and lowest random number is ")
hal_label.pack()

hal_button = tk.Button(window,text="Click to get highest and lowest",command= on_hal_button_click)
hal_button.pack()

list_of_num = tk.Listbox(window)
list_of_num.pack()
window.mainloop()