from random import randint

n = randint(0, 20)
print(n)
lst = [randint(-10, 80) for x in range(n)]
print(lst)
x = 0
for i in range(1, len(lst)):
    for j in range(i, 0, -1):
        if lst[j] < lst[j - 1]:
            lst[j], lst[j - 1] = lst[j - 1], lst[j]
print(lst)
