## Función anidada
# Función de afuera
def outer(x):
    # Función anidada
    def inner(y):
        # Retorna x+y
        return x +y
    # Retorna un referencia a la función anidada
    return inner

# Llama la función de afuera donde x = 5
add_five = outer(5)
# Llama a la función anidada donde y = 6
result = add_five(6)
# Imprime el resultado
print(result)

## Función como argumento
# Función de sumar con dos parametros
def add(x, y):
    return x + y
# Función de calcular con 3 parametros, una referencia a una función y dos variables
def calculate(func, x, y):
    # Retorna la referencia a la función con las dos variables como parametros
    return func(x, y)
# Llama a la función de clacular con la función add, 4 y 6 como paramtros
result = calculate(add, 4, 6)
# Imprime el resultado
print(result) 

## Retornar una función

# Función de saludar con nombre como parametro
def greeting(name):
    # Función anidada que retirna un mensaje con el nombre
    def hello():
        return "Hello, " + name + "!"
    # Devuelve la referenci a ala función anidada
    return hello

# Aqupi ya no se llama de nuevo la función porque directamente devueleve un mensaje
greet = greeting("Atlantis")
# Se imprime el mensaje
print(greet()) 


