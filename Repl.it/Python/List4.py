z = [3, 7, 4, 2]
print(z)
print(z[0])
print(z[-1])
z[1] = 5
print(z)
print("1: \t", z[0:2])
print("2: \t", z[:3])
print("3: \t", z[1:])
a = [33, -12, "may"]
b = [21, 48, 5]
print(a + b)
sp1 = [[0, 0], [0, 1], [1, 0], [1, 1]] * 3
print(sp1)
print("4: \t", 5 in [2, 3, 5])
print("5: \t", 5 not in [2, 3, 5])
sp = [1, 2] + [4, 23] + [5]
print(sp)
print("6: \t", sp[0])
print("7: \t", sp[-1])
print("8: \t", sp[0:5:2])
print("9: \t", len(sp))
print("10:\t", max(sp), min(sp), sum(sp))
print("11:\t", sp.index(4))
print("12:\t", sp.count(4))
sp.append(14)
print("13:\t", sp)
sp.extend([5, 6, 7, 8])
print("14:\t", sp)
sp.append([5, 6, 7, 8])
print("15:\t", sp)
del sp[4]
print("sp: ", sp)
sp3 = sp.copy()
print("sp3: ", sp3)

sp3.insert(0, 8)
print("sp3: ", sp3)

print(bool(sp3))

sp1.sort()
print(sp1)


sp1.sort(reverse=True)
print(sp1)

z.reverse()
print(z)
z.remove(5)
print(z)

a = z.pop(1)
print(a, z)
