print("Введите число: ")
n = int(input())
print("Введите какую цифру вы хотите найти ")
m = int(input())
summ = 0
if m // 10 != 0:
    print("Это не цифра")
else:
    while n > 0:
        S = n % 10
        if S == m:
            summ += 1
        n //= 10
    print("Ваша цифра встречается", summ, " раз")
