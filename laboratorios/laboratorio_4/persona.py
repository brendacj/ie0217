class Person():
    # Constructor inicializa las variables
    def __init__(self, name, age):
        self.name = name
        self.age = age
    # Muestra la información
    def displayinfo(self):
        print(f"Name: {self.name}\nAge: {self.age}")
