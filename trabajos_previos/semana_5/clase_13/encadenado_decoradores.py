## Decorar literalmente xd ##
# Primera función decoradora, recibe una función
def star(func):
    # Función anidada que imprime 15 estrellas antes y después de llamar la función
    def inner(*args, **kwargs):
        print("*" * 15)
        func(*args, **kwargs)
        print("*" * 15)
    return inner # Devuelve la referencia a la función anidada

# Segunda función decoradora
def percent(func):
    # Imprime 15 porcentajes antes y después de la fución
    def inner(*args, **kwargs):
        print("%" * 15)
        func(*args, **kwargs)
        print("%" * 15)
    return inner # Referencia de la función anidada

@star # Primero decorar con estrellas
@percent # Después decorrar con porcentajes
def printer(msg):
    print(msg)

# Llamar printer con mensaje "Hello"
printer("Hello")

