from random import randint

n = randint(0, 20)
print(n)
l = [randint(-10, 80) for x in range(n)]
print(l)
ma = 0
mi = l[1]
for i in range(n):
    if l[i] > ma:
        ma = l[i]
    if l[i] < mi:
        mi = l[i]
print(ma, mi)
