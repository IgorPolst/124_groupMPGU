langes = {}
n = int(input())
for _ in range(n):
    for lang in input().split():
        langes[lang] = langes.setdefault(lang.strip(", "), 0) + 1

result = map(lambda x: x[0], filter(lambda count: n == count[1], langes.items()))
if list(result) == []:
    print("Сериал снять не удастся")
else:
    print(*result)
