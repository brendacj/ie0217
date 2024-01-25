# También con las funciones internas se puede usar global para moridificar las variables
def outer_function():
    num = 20
    def inner_function():
        # Aquí lo modifica
        global num
        num = 25

    # Dentro de la función externa
        # Aquí no se imprime modificada
    print("Before calling inner_function(): ", num)
    inner_function()
    print("After calling inner_function(): ", num)

# LLama la función externa
outer_function()
# Aqui se imprime modificada
print("Outside both function: ", num)