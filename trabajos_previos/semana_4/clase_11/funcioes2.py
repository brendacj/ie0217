import math
# Encontrar la potencia manualmente
def find_square(num):
    result = num * num
    return result

# Llama la funcion
square = find_square(3)
print( "Square: ", square)


# Encontrar la raiz cuadrada con math
square_root = math.sqrt(4)
print("Square Root of 4 is", square_root)

# Encontrar la potencia con math
power = pow(2, 3)

print("2 to the power 3 is", power)


# Parametros por defecto
def add_numbers( a = 7, b = 8):
    sum =a +b
    print('Sum:', sum)

#Los parametros van a ser los especificaos a menos que se cambien así:
add_numbers(2, 3)
add_numbers(a = 2)
add_numbers()


# Lo mismo pero con strings
def display_info(first_name, last_name):
    print('First Name:', first_name)

    print('Last Name:', last_name)

display_info(last_name = 'Cartman', first_name = 'Eric')