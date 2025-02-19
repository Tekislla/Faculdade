import random
import secrets
import string

letters = string.ascii_letters
digitis = string.digits
special_chars = string.punctuation

alphabet = letters + digitis + special_chars

pwd_length = 16

pwd = ''
for i in range(pwd_length):
    pwd += ''.join(secrets.choice(alphabet))

print("A senha gerada foi: " + pwd)