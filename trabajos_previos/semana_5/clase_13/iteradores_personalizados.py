# Crear clase
class PowTwo:
    # Constructor
    def __init__(self, max = 0):
        # Atrubuto max
        self.max = max
    # Método mágico iter
    def __iter__ (self):
        # Empieza, el primer elemento es 0
        self.n = 0
        return self
    # Método mágico next
    def __next__ (self):
        # El proximo no es iter+1, sino que se personaliza
        # Si es menor que el maximo que se define
        if self.n <= self.max:
            # Va devolviendo las potencias de dos
            result = 2 ** self.n
            self.n += 1
            return result
        # Si ya es mayor se llama a StopIteration
        else:
            raise StopIteration
        
#Instanciar un objeto con 3 como maximo
numbers = PowTwo(3)

# Crear el iterable del objeto
i = iter(numbers)

# Acceden a los próximos elementos
print(next(i))
print(next(i))
print(next(i))
print(next(i))
# Aquí ya es mayor, se levanta la excepción
print(next(i)) 

# También se puede iterar así
'''
for i in PowTwo(3):
    print(i)
'''
