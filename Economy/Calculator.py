budjet, bet, change, change_time, time = int(input("Введите ваш бюджет: ")), float(input("Введите вашу ставку: ")), int(input("Введите изменение ставки: ")), int(input("Введите как часто изменяется ваша ставка: ")), int(input("Введите кол-во лет инвестиций: "))

if change_time == 0:
    for i in range (time):
        budjet += budjet*(bet/100)
else:
    for i in range(time):
            budjet += budjet*(bet/100)
            bet += change*change_time

print(budjet)
