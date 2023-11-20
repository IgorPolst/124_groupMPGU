from random import randint

n = randint(0, 20)
print(n)
l = [randint(-10, 80) for x in range(n)]
print(l)
for i in range(n // 2):
    s = l[i]
    l[i] = l[n - 1 - i]
    l[n - 1 - i] = s
print(l)
