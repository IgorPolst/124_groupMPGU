# Формат входных данных
# На вход программе подаётся целое число x.

# Формат выходных данных
# Программа должна вывести текст в соответствии с условием задачи.


x = int(input())

if (x > -30 and x <= - 2) or (x > 7 and x <= 25):
    print("Принадлежит")
else:
    print("Не принадлежит")