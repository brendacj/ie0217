# Función de afuera, pide un número n
def make_multiplier_of(n):
    # Función anidada, también pide un número
    def multiplier(x):
        # Retorna la multiplicación de dos números
        return x * n
    return multiplier # Retorna la referencia a la función

# Multiplicador de 3
times3 = make_multiplier_of(3)
# Multiplicador de 5
times5 = make_multiplier_of(5)

# 3x9
print(times3(9))
# 5x3
print(times5(3))
# 5x3x2
print(times5(times3(2)))
