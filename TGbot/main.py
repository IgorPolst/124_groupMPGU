import telebot
bot = telebot.TeleBot("7426416928:AAFD08Mc5xRBzr5uQIx-2kB6H8ufJhFzMD4")

@bot.message_handler(content_types=["text"])
def get_text_messages(message):
    if message.text == "Привет":
        bot.send_message(message.from_user.id, "Привет, чем я могу тебе помочь?")
    elif message.text == "/help":
        bot.send_message(message.from_user.id, "Напиши привет")
    else:
        bot.send_message(message.from_user.id, "Я тебя не понимаю. Напиши /help.")

bot.polling(none_stop = True, interval = 0)

