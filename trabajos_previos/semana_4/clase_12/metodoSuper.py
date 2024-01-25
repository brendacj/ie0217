class Animal:
    # Método de la super clase
    name = ""
    def eat(self):
        print("I can eat")

# Hereda de la clase animal       
class Dog(Animal):
    # Llama a la función de la clase base aquí
    def eat(self):
        super().eat()

        print("I like to eat bones")


# objeto de la subclase
labrador = Dog()
# Accede al método de la subclase
labrador.eat()