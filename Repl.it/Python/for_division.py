print("Введите число, делители которого необходимо найти: ")
n = int(input())
S = 1
for i in range(1, n + 1, 1):
    if n % i == 0:
        S = i
        print(S)
