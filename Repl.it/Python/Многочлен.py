import math

a = float(input())
b = float(input())
c = float(input())
D = b**2 - 4 * a * c
if D < 0:
    print("Нет корней")
else:
    if D == 0:
        x = -(b / 2 * a)
        print("Один корень = ", x)
    else:
        x1 = (-b + math.sqrt(D)) / (2 * a)
        x2 = (-b - math.sqrt(D)) / (2 * a)
        print("Два корня \n x1 = ", "%.2f" % x1, "\n x2 = ", "%.2f" % x2)
