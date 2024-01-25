class Person:
    # constructor y atributos
    def __init__ (self, name, age):
        self.name = name
        self.age = age
    # Método mágico para el comparador <
    def __lt__ (self, other):
        # La actual menor que otro
        return self.age < other.age

# Dos objetos
p1 = Person("Alice", 20)
p2 = Person("Bob", 30)

# Imprimir
# Internamente es compara la edad
print(p1 < p2) 
print(p2 < p1) 
