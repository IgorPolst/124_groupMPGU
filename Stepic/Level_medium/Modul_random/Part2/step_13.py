
from random import randint, choice
import string
qua, leng = int(input()), int(input())

for number in range(qua):
    pasword = "" 
    for letter in range(leng):
        n = randint(0,1)
        if n == 1:
            pasword += choice(string.ascii_letters)
        else:
            pasword += choice(string.digits)
    print(pasword)
