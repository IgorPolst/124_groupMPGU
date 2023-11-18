print("Введите до какого числа перемножать: ")
n = int(input())
S = 1
for i in range(1, n + 1, 1):
    S = S * i
print(S)
