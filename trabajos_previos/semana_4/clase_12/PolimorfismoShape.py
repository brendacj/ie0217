from math import pi
# Clase sahep
class Shape:
    # Constructor
    def __init__(self, name):
        self.name = name
    # Métodos
    def area(self):
        pass
    def fact(self):
        return "I am a two-dimensional shape."
    # Método especial
    def __str__ (self):
        return self.name
    
# Clase Square derivada de Shape
class Square(Shape):
    # Constructor
    def __init__(self, length):
        # Súper init de la clase base
        super().__init__("Square")
        self.length = length
    # Algunos métodos que se llaman igual a los de la clase pasada
    def area(self):
        return self.length**2
    
    def fact(self):
        return "Squares have each angle equal to 90 degrees."
    
# Clase Square derivada de Shape   
class Circle(Shape):
    def __init__ (self, radius):
        # Súper init de la clase base
        super().__init__ ("Circle")
        self.radius = radius
    # Otro método que se llama area
    def area(self):
        return pi*self.radius**2

# Obejto de Square 
a = Square(4)

# Objeto de Circle
b = Circle(7)
# Imprime
print(b)
## Accede al "mismo" método, pero hacen cosas diferentes
print(b.fact())
print (a.fact())
# Area
print(b.area())


