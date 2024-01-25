c = 1 # Variable local, no se tiene que especificar
def add():
    print(c)
add()

# Modificar la variable local: Da error
c = 1
def add():
    # Este es el error
    # c = c + 2
    print(c)
add()


# Modificar la variabloe local, aquí sí se puede 
c = 1
def add():
    # Se tiene que usar global
    global c
    c = c + 2
    print(c)

add()



