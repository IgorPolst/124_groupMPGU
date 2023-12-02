n = int(input())
total = 0

for i in range(n + 1):
    if n % (i + 1) == 0:
        total += i
        print(n, i, total)
print(total)
