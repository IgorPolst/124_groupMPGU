from random import randint

n = randint(0, 20)
print(n)
l = [randint(-10, 80) for x in range(n)]
print(l)
j = n - 1
while j > 0:
    for i in range(j):
        if l[i] > l[i + 1]:
            bufer = l[i]
            l[i] = l[i + 1]
            l[i + 1] = bufer
    j -= 1
print(l)
