x = {0, 0, 1, 2, 3}
print(x)
y = {"a", "textbook", 5}
print(y)
x = set(["a", 5, "textbook", 5])
print(x)
y = set("Hello!")
print(y)
z = set([0, 1, 2, 3, 4, 5])
print(z)
print("-----")
a = {0, 1, 2}
for b in a:
    print(b)
print("+----")
А = {0, 1, 2, 3}
В = {4, 3, 2, 1}
С = А.union(В)
print(С)
print("++---")
А = {0, 1, 2, 3}
В = {4, 3, 2, 1}
С = А.difference(В)
print(С)
print("+++--")
А = {0, 1, 2, 3}
В = {4, 3, 2, 1}
С = А.intersection(В)
print("1: ", С)
a = {0, 1, 2, 3}
print("2: ", len(a))
a = {0, 1, 2, 3}
a.add(4)
print("3: ", a)
a = {0, 1, 2, 3}
b = {4, 3, 2, 1}
a.update(b)
print("4: ", a)
a = {0, 1, 2, 3}
a.remove(3)
print("5: ", a)
a = {0, 1, 2, 3}
a.remove(3)
print("6: ", a)
a = {0, 1, 2, 3}
a.clear()
print("7: ", a)
a = {0, 1, 2, 3}
b = a.copy()
print("8: ", b)
