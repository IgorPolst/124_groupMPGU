print ("Введите радус шара R = ")
R = float (input())
if R <= 0 :
  print ("Такого круга не сушествует")
else:
  V = 3.1415926535*4*pow(R,3)/3
  print ("Объём шара = ", V)