# Función calcular
def calculate():
    # Inicializa num en 1
    num = 1
    # Función anidada
    def inner_func():
        # num no loca. se puede usar afuera del bloque
        nonlocal num
        num += 2 # Le suma dos
        return num # Retorna num
    return inner_func # Retorna una referencia a la función anidada

# Llama la función de afuera (odd es una referencia de función)
odd = calculate()
# Llamar a la función anidada
print(odd())
print(odd())
print(odd())
# Llama la función de afuera, empieza de nuevo
odd2 = calculate()
# Llama la función anidada
print(odd2())
