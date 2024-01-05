numbers = [8, 9, 10, 11]
numbers[1] = 17
numbers.append(4)
numbers.append(5)
numbers.append(6)
numbers.remove(numbers[0])
numbers.append(numbers.copy())
numbers.insert(2,25)
print(numbers)