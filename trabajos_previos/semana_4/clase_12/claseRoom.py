# Clase
class Room:
    # Atributos
    length = 0.0
    breadth = 0.0
    # Método para calcular area e imprimirla
    def calculate_area(self):
        # Self para acceder a los métodos de la clase actual
        print("Area of Room =", self.length * self.breadth)

# Crear el objeto
study_room = Room()
# Acceder a los atributos
study_room.length = 42.5
study_room.breadth = 30.8
# Acceder al método
study_room. calculate_area()
