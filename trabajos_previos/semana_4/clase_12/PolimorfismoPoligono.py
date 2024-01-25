## Diferentes clases con métodos llamados igual
# Dependiendo de qué tipo de objeto se cree va a realizar cosas diferentes
class Polygon:
    def render(self):
        print("Rendering Polygon...")
class Square(Polygon):
    # renders Square
    def render (self):
        print("Rendering Square. ..")

class Circle(Polygon):
    def render (self):
        print("Rendering Circle...")

# Objeto de Square
s1 = Square()
# Método de Square
s1.render()
# Obejto de Circle
c1 = Circle()
#Método de Circle
c1.render()
