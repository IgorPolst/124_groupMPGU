from random import choice

list_answer = ["Бесспорно", "Предрешено", "Никаких сомнений", "Определённо да","Можешь быть уверен в этом", "Мне кажется - да", "Вероятнее всего", "Хорошие перспективы", "Знаки говорят - да", "Да", "Пока неясно, попробуй снова", "Спроси позже", "Лучше не рассказывать", "Сейчас нельзя предсказать", "Сконцентрируйся и спроси опять", "Даже не думай", "Мой ответ - нет", "По моим данным - нет", "Перспективы не очень хорошие", "Весьма сомнительно"]
name = ""
print ('Привет Мир, я магический шар, и я знаю ответ на любой твой вопрос. ')
print ("Пожалуйста, назови своё имя: " )
name = input()
print (f"Привет {name}")
question = "Y"
while question != "N":
    print (f"{name}, какой у тебя вопрос? ")
    question = input()
    print(choice(list_answer))
    print ("У тебя остались ещё вопросы? Да - Y Нет - N")
    question = input()
print ("Возвращайся, как-только они у тебя снова появятся! ")