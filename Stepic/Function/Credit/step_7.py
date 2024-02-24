# объявление функции
def number_to_words(num):
    mass = ["",""]
    se = ['','один', 'два', 'три', 'четыре', 'пять', 'шесть', 'семь', 'восемь', 'девять', 'десять', 'одиннадцать', 'двенадцать', 'тринадцать', 'четырнадцать', 'пятнадцать', 'шестнадцать', 'семнадцать', 'восемнадцать', 'девятнадцать']
    sd = ['', '', 'двадцать', 'тридцать', 'сорок', 'пятьдесят', 'шестьдесят', 'семьдесят', 'восемьдесят', 'девяносто']
    if num < 20:
        mass [0] = se[num]
    else:
        mass[1] = se[num%10] 
        mass[0] = sd[num//10]  
    return " ".join(mass)

# считываем данные
n = int(input())

# вызываем функцию
print(number_to_words(n))