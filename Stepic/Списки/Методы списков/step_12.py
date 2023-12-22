n = int(input())
mass = []

for i in range(n):
    mass.append(int(input()))
for i in range(1, len(mass)-1, 2):
    del mass[i]

print(mass)
