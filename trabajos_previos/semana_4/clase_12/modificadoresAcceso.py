class Person:
    def __init__(self, name, age,lastaname):
        # segúh la cantidad de _
        self.name = name # public
        self._age = age # protegido
        self.__lastname = lastaname #privado


p1 = Person("Juan", 20, " Perez")
#p1.__lastname #Esto devuelve un error