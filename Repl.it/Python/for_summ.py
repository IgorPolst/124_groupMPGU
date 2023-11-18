print("Введите до какого числа суммировать: ")
n = int(input())
S = 0
for i in range(0, n + 1, 1):
    S = S + i
print(S)
