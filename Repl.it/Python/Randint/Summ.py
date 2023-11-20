from random import randint

n = randint(0, 10)
print(n)
l = [randint(10, 80) for x in range(n)]
print(l)
m = [randint(10, 80) for x in range(n + 1)]
print(m)
s = l + m
print(s)
