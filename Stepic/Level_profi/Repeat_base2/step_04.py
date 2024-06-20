numbers = [int(i) for i in input().split()]

result=[]
for i in numbers:
    if numbers.count(i) > 1:
        result.append(i)
if result != []:
    print(*list(set(result)).sort())

