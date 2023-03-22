import keyboard
import time

logs = []
start_time = time.time()
escape_count = 0

def on_press(key):
    global escape_count
    current_time = time.time() - start_time
    logs.append((current_time, key.name))
    if key.name == 'esc':
        escape_count += 1
        if escape_count > 2:
            keyboard.unhook_all()
    else:
        escape_count = 0

keyboard.on_press(on_press)

while time.time() - start_time < 60:
    time.sleep(1)

keyboard.unhook_all()

for log in logs:
    print(log[0], log[1])