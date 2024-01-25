# Clase super
class SuperClass:
    #Método de la clase super
    def super_method(self):
        print("super Class method called")

# clase derivada de la SuperClase
class DerivedClass1(SuperClass):
    #Método
    def derived1_method(self):
        print("Derived class 1 method called")

# Clse derivada de la clase derivada
class DerivedClass2(DerivedClass1):
    # Método
    def derived2_method(self):
        print("Derived class 2 method called")


# Crear un objeto de la clase derivada dos
d2 = DerivedClass2()

# Puede acceder al método de la super clase
d2.super_method() 
# Acceder al método de la clase derivada 1
d2.derived1_method() 
# Método de la clase derivada 2
d2.derived2_method() 
