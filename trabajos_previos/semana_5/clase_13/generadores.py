#Función que recibe el argumento n
def my_generator(n):
    # Inicializa el valor en 0
    value = 0
    # Mientras que sea menor que n
    while value < n:
        # "Devuelve" ese valor
        yield value
        # Incrementa el valor
        value += 1

# Llamar la función en una lista con n = 3
# la función generadora se va a pausar hasta que se pida el proximo elemento
for value in my_generator(3):
    # Imprime el valor retornado
    print(value)
