# Esta es la forma más básica de acceder a un archivo
# Hay que tener cuidado con cerrar el archivo que se abra
file1 = open("test.txt", "r")
# Lee el archivo 
read_content = file1.read()
# Imprime
print(read_content)
# Cierra el archivo
file1.close()

# Lo mejor es hacerlo de esta forma ya que se cierra el archivo
# Automaticamente
with open("test.txt", "r") as file1: # Abre en modo lectura
    # Lee el archivo
    read_content = file1.read()
    # Imprime
    print(read_content)


# Esta es otra forma, con un bloque finally que siempre se va
# a ejecutar
try:
    file1= open("test.txt", "r")
    read_content = file1.read()
    print(read_content)
finally:
    # cerrar el archivo
    file1.close()

# Así también se accede al archivo pero en mod escritura
with open('test2.txt', 'w') as file2:
    # Se esribe el mensaje
    file2.write('Programming is Fun.')

