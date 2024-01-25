# Clase mammal
class Mammal:
    def mammal_info(self):
        print("Mammals can give direct birth.")

# Clse WingedAnimal
class WingedAnimal:
    def winged_animal_info(self):
        print("Winged animals can flap.")

# Herenda ambas clases
class Bat(Mammal, WingedAnimal):
    pass

# Objeto de la clase Bat()
b1 = Bat()
# Puede acceder a los métodos de ambas clases
b1.mammal_info()
b1.winged_animal_info()
