# Primera clase
class SuperClass1:
    def info(self):
        print("Super Class 1 method called")
# Segunda clase
class SuperClass2:
    # El método se llama igual
    def info(self):
        print("Super Class 2 method called")

# Hereda de las primeras dos clases
class Derived(SuperClass1, SuperClass2):
    pass
# Instancia un objeto
d1 = Derived()
# Se llama el método de la SuperClase1 fue el primero que se encontró
d1.info()

