print("Введите до какого числа считать: ")
a = int(input())
n = 0
for i in range(1, 999999):
    if n < a:
        n += 1 / i
    else:
        break
print(i, " ")
