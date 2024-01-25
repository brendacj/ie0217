class Animal:
    # Atributo clase base
    name = ""
    # Metodo clase base
    def eat(self):
        print("I can eat")

# Hereda de la clase Animal    
class Dog(Animal):
    # Metodo de la sub clase
    def display(self):
        # Accede al atributo usando self
        print("My name is ", self.name)

# Objeto de la sub clase
labrador = Dog()
# Accede al atributo de la clase base desde el obejto de la subclases
labrador.name = "Rohu"
# Accede al método de la clase base desde el obejto de la subclases
labrador.eat()
# Accede al método de la subclase
labrador.display()
