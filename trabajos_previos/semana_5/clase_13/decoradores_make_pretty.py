# Función decoradora
def make_pretty(func):
    #  Función anidada
    def inner():
        # Imprimir un mensaje
        print("I got decorated")
        # Llama la función pasada por parametro
        func()
    # retirna la referencia a la función anidada
    return inner

# Una función cualquiera
def ordinary():
    print("I am ordinary")

# Aquí se decora la función, llamando la función de afuera con la función ordinary como parametro
decorated_func = make_pretty(ordinary)
# Llamar la función anidada
decorated_func()

## TAMBIEN SE PUEDE HACER ASÍ ##

def make_pretty1(func):
    #  Función anidada
    def inner():
        # Imprimir un mensaje
        print("I got decorated")
        # Llama la función pasada por parametro
        func()
    # retirna la referencia a la función anidada
    return inner

# Una función cualquiera
# Sintaxis, el interprete sabe que tiene que ser decorada con make_pretty
# cuando se llame la función
@make_pretty
def ordinary1():
    print("I am ordinary")

ordinary1()

