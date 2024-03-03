budget, bet, contribution, goal = int(input("Введите ваш стартовый бюджет: ")), float(input("Введите вашу ставку: ")), int(input("Введите сумму ежегодного пополнения: ")), int(input("Введите цель накоплений: "))
year = 0
while budget < goal:
    budget += budget*(bet/100)+contribution
    year +=1
    print(budget)
print (f"Вы накопите {budget} к {year} году")
