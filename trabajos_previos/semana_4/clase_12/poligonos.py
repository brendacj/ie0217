class Polygon:
    # Constructor que recibe el número de lados
    def __init__ (self, no_of_sides):
        #Atributos
        self.n = no_of_sides
        self.sides = [0 for i in range(no_of_sides)]
    def inputSides(self):
        # Método para pedir los lados
        self.sides = [float(input("Enter side "+str(i+1)+" : ")) for i in range(self.n)]
    # Método para imprimir sus lados
    def dispSides(self):
        for i in range(self.n):
            print("Side",i+1,"is",self.sides[i])

# Hereda de la clase poligono
class Triangle(Polygon):
    # Constructor
    def __init__ (self):
        Polygon.__init__ (self,3)

    # Calcular area
    def findArea(self):
        a, b, c = self.sides
        # Calcular el semiperimetro
        s=(a+b+c)/2
        area = (s*(s-a)*(s-b)*(s-c)) ** 0.5

        print('The area of the triangle is %0.2f' %area)

# Crear la instancia

t = Triangle()

# Acceder al método
t.inputSides()

# Se muestran los lados

t.dispSides()

# Calcula el area
t.findArea()
