# Clase
class Point:
    #Constructor y atributos
    def __init__(self, x=0, y=0):
        self.x = x
        self.y = y

    # Método mágico para strings
    def __str__ (self):
        # Retona
        return "({0},{1})".format(self.x, self.y)

    # Método mágico para sumar
    def __add__(self, other):
        # La original mas la otra
        x = self.x + other.x
        y = self.y + other.y
        # Devuelve la suma
        return Point(x, y)

# Objetos
p1 = Point(1, 2)
p2 = Point(2, 3)
#Suma de objetos
print(p1+p2)

