# Aquí se usa def
def function_name(arguments):
    # función
    return

# Función para imprimri hola mundo, se debe llamar
def greet(name = "Sin nombre"):
    print("Nombre", name)

greet("Brenda")

## Función de suma
def sumar(valor1, valor2):
    print("La suma de ", valor1, "con", valor2, "es: ", valor1 + valor2)

sumar(15, 14)
sumar(15, 14)
sumar(114, 14)

# Suma con un retorno
def sumar1(valor1, valor2):
    suma = valor1 + valor2
    return suma

#Si no uso return se imoprime none
suma1 = sumar1(15, 14)
print("La suma es", suma1)