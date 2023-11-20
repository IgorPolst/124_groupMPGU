print("Введите строку необходимую распаковать")
s = str(input())
n = int(0)
while len(s) != 0:
    n = (int)(s[0] - "0")
    for j in (0, n, 1):
        print(s[1])
    s.erase(0, 2)
