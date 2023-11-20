from random import randint

n = randint(0, 20)
print(n)
l = [randint(-10, 80) for x in range(n)]
print(l)
print("Введите число, которое должно быть в массиве")
peas = int(input())
index = randint(0, n)
print(index)
raz = n + 1
s = [0] * raz
for i in range(raz):
    if i < index:
        puf = l[i]
        s[i] = puf
    if i == index - 1:
        s[i] = peas
    if i > index:
        s[i] = l[i - 1]
print(s)
