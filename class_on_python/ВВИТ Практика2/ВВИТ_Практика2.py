class Speed:
    Time, Distant, speed = 0, 0, 0

    def set_Speed(self, time, dist):
        self.Time = time
        self.Distant = dist

    def get_Speed(self):
        self.Time = int(input("Введите время движения: "))
        self.Distant = int(input("Введите пройденное расстояние:"))

    def payment_Speed(self):
        self.speed = self.Distant / self.Time

    def show_Speed(self):
        print("Ваша скорость = ", self.speed)


People1 = Speed()
People1.get_Speed()
People1.payment_Speed()
People1.show_Speed()
