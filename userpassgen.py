import json
import random
import string

credentials = {}

for i in range(100):
    username = ''.join(random.choices(string.ascii_lowercase, k=5))
    password = ''.join(random.choices(string.ascii_letters + string.digits, k=8))
    credentials[username] = password

with open("login.json", "w") as f:
    json.dump(credentials, f)