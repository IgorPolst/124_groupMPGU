# Формат входных данных
# На вход программе подаётся положительное трёхзначное число.

# Формат выходных данных
# Программа должна вывести два числа с поясняющим текстом: сумма цифр и произведение цифр.

number = int(input())
print("Сумма цифр =", number % 10 + number % 10**2 // 10 + number // 100)
print("Произведение цифр =", (number % 10) * (number % 10**2 // 10) * (number // 100))
