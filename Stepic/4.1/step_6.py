# Формат входных данных
# На вход программе подаётся одно целое положительное четырёхзначное число.

# Формат выходных данных
# Программа должна вывести «ДА», если соотношение выполняется, и «НЕТ» — если не выполняется.

number = int(input())
first = number % 10 + number // 1000
second = number % 1000 // 100 - number % 100 // 10
if first == second:
    print("ДА")
else:
    print("НЕТ")
