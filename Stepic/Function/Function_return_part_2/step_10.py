# объявление функции
def convert_to_python_case(text):
    mass = [i for i in text]
    mass[0] = mass[0].lower()
    
    while not text.islower():
        for i in range(1, len(mass)):
            if mass[i].isupper():
                mass[i] = mass[i].lower()
                mass.insert(i, "_")
            text = "".join(mass)
    return text


# считываем данные
txt = input()

# вызываем функцию
print(convert_to_python_case(txt))
