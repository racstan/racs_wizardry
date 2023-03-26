import os
import random
from tkinter import *
from PIL import Image, ImageDraw, ImageFont

IMAGE_DIR = "images/"

root = Tk()
root.title("Quote Generator")

quote_label = Label(root, text="Enter your quote:")
quote_label.pack()
quote_entry = Entry(root, width=50)
quote_entry.pack()

image_label = Label(root, text="Select an image:")
image_label.pack()
image_choice = StringVar()
image_choice.set(os.listdir(IMAGE_DIR)[0])
image_menu = OptionMenu(root, image_choice, *os.listdir(IMAGE_DIR))
image_menu.pack()

def generate_quote():
    quote = quote_entry.get()

    if not quote:
        quotes = ["The best way to predict the future is to invent it.",
                  "Stay hungry, stay foolish.",
                  "Innovation distinguishes between a leader and a follower.",
                  "Your work is going to fill a large part of your life, and the only way to be truly satisfied is to do what you believe is great work.",
                  "Don't let yesterday take up too much of today."]
        quote = random.choice(quotes)

    return quote

def select_image():
    image_path = os.path.join(IMAGE_DIR, image_choice.get())
    return image_path

def create_image(quote, image_path):
    with Image.open(image_path) as img:
        font_path = "arial.ttf" 
        font_size = 40
        font = ImageFont.truetype(font_path, font_size)

        draw = ImageDraw.Draw(img)
        text_width, text_height = draw.textsize(quote, font=font)
        x = (img.width - text_width) / 2
        y = (img.height - text_height) / 2

        draw.text((x, y), quote, font=font, fill="white")

        new_image_path = os.path.join(IMAGE_DIR, "quote_image.jpg")
        img.save(new_image_path)

    return new_image_path

def save_image():
    from tkinter import filedialog
    save_path = filedialog.asksaveasfilename(defaultextension=".jpg")

    if save_path:
        with open(new_image_path, "rb") as f:
            with open(save_path, "wb") as f2:
                f2.write(f.read())

generate_button = Button(root, text="Generate", command=lambda: [create_image(generate_quote(), select_image()), save_image()])
generate_button.pack()

root.mainloop()
