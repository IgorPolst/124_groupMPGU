import math

print("Введите длины гипотенузы")
a = int(input())
b = int(input())
if a <= 0 | b <= 0:
    print("Нет такого треугольника")
else:
    c = math.sqrt(pow(a, 2) + pow(b, 2))
    print("Гипотенуза =  ", c)
