# Función greet que recibe un nombre como parametro
def greet(name):
    # Función anidada
    def display_name():
        # Mustra un mensaje con el nombre
        print("Hi", name)
    # Llama la función anidada
    display_name()

# LLama la función greet
greet("John")


## Devolver funciones
def greet1():
    # Se estable el nombre dentro de la función
    name = "John"
    # Devuelve una función lambda con el mensaje
    return lambda: "Hi " + name

#Llama la función greet1 (message es una función, o una llamada de función)
message = greet1()

# Llama la función anidada
print(message())

