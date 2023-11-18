import math
print ("Введите кол-во итераций:  ")
n = int(input())
S = 0.0
for i in range (0,n,1):
  S= math.sqrt(2+S)
print (S, "\n")