# Función división inteligente, recibe una función
def smart_divide(func):
    # Función anidada, recibe dos números
    def inner(a, b):
        # Mnesaje de lo que va a dividir
        print("I am going to divide", a, "and", b)
        # Si b es 0 imprime un mensaje de que no se puede dividir
        if b == 0:
            print("Whoops! cannot divide")
            return
        # Sino devuelve la función (Que va a ser la de dividir)
        return func(a, b)
    return inner # Devuelve la referencia a la función anidada

@smart_divide # Debe ser decorada
# Función para dividir
def divide(a, b):
    print(a/b)

# Lllamar la función anidada con 2 y 5
divide(2,5)
# Llamar la función anidada con 2 y 0, este manda el mensaje de error
divide(2,0)
