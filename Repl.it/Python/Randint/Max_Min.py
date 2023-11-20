from random import randint

n = randint(0, 20)
print(n)
l = [randint(-10, 80) for x in range(n)]
print(l)
ma = -11
mi = 0
for i in range(n):
    if l[i] < 0:
        if l[i] > ma:
            ma = l[i]
        if l[i] < mi:
            mi = l[i]
print(ma, mi)
