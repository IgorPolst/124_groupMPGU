class TPupil:
    pass
pupils = []
n = int(input('Введите количество учеников: '))

for i in range(n):
    pupils.append(TPupil())
for i in range(n):
    print('Введите информацию о ', i+1, 'ученике: ')
    pupils[i].region = input('Округ: ')
    pupils[i].surname = input('Фамилия: ')
    pupils[i].subject = input('Любимый предмет: ')
    pupils[i].ball = int(input('Баллы: '))

k1 = 0 
k2 = 0 
sred1 = 0
sred2 = 0
pupils_not_ball = 0
for i in range(n):
    if pupils[i].region == 'Петербург' or pupils[i].region == 'Москва':
       if pupils[i].region == 'Петербург' and pupils[i].subject == 'информатика':
            k1+=1
            sred1 +=pupils[i].ball
       if pupils[i].region == 'Москва':
            k2+=1
            sred2+=pupils[i].ball 
    else:
        pupils_not_ball+=1
        
print('Регионы принимавшие участие в оценке: \n')
for i in range(n):
    print(pupils[i].region)
print('Средний балл по Петербургу, среди любителей информатики: ', sred1/k1,'\nСредний балл по Москве', sred2/k2,'\nКол-во человек не принимало участие в оценке.',pupils_not_ball)
