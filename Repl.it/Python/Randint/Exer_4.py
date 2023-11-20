from random import randint

n = randint(0, 20)
print(n)
l = [randint(-10, 80) for x in range(n)]
print(l)
for i in range(n - 1):
    bufer = l[i]
    bufer2 = i
    for j in range(i + 1, n):
        if l[j] < bufer:
            bufer = l[j]
            bufer2 = j
        l[bufer2] = l[i]
        l[i] = bufer
print(l)
