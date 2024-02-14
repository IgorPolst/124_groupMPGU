# Даны две различные клетки шахматной доски.
# Напишите программу, которая определяет,
# может ли ладья попасть с первой клетки на вторую одним ходом.
# Программа получает на вход четыре числа от
# 1 до 8 каждое, задающие номер столбца и номер строки
# сначала для первой клетки, потом для второй клетки.
# Программа должна вывести «YES»,
# если из первой клетки ходом ладьи можно попасть во вторую,
# или «NO» в противном случае.

colum1 = int(input())
line1 = int(input())
colum2 = int(input())
line2 = int(input())

if (colum1 == colum2 or line1 == line2) and not (colum1 == colum2 and line1 == line2):
    print("YES")
else:
    print("NO")
