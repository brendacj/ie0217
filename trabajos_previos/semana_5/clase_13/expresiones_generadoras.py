# Generador de cuadrados (i*i para cada elemento del rango)
squares_generator = (i * i for i in range(5))

# Se van pidiendo los elementos, se itera el generador
for i in squares_generator:
    print(i)
