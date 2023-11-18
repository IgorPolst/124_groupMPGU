class Human ():
    name = ""
    def __init__(self,name):
        self.name = name
        print("Создан класс челове")
class Prepod (Human):
    kafedra = ""
    dolgnost = ""
    def __init__(self,kafedra):
        self.kafedra = kafedra
        print("Созданн класс преподаватиель")
    def message (self):
        print ("Здравствуйте я - преподаватель ", self.name, "работаю на кафедре", self.kafedra)
class Student (Human):
    n=0
    fakultet = ""
    gruppa = ""
    def __init__ (self, name, sity, vozr, ball):
        self.name = name
        self.sity = sity
        self.__vozr = vozr
        self.__ball =ball
        Student.n += 1
        print ("Создан класс студент")
    def message (self):
        print("Здравствуйте, я - студент ", self.name," из ",self.sity, self.__vozr, ".\nЯ учусь на ", self.__ball)
    def kol():
        print ("У нас {0:d} студента.".format(Student.n))

st0 = Human ("Алексей")
st0 = Prepod ("Информационные технологии")
st1 = Student('Сергей', "Москвы", "18", 4)
st2 = Student('Константин', "Ростова", "21", 3)
st3 = Student('Илья', "Воронежа", "34", 5)

st0.message()
st1.message()
st2.message()
st3.message()

#print(st1.vozr)
#print(st1._Student__vozr)
Student.kol()
