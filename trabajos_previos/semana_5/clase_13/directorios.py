# Importar os para manejo de archivos y directorios
import os
# Imprime el directorio donde se está ubicado
print("Directorio actual")
print(os.getcwd())
# Crea el directorio Python33
os.mkdir('Python33')

# Cambia al directorio Python33
os.chdir('Python33')
# De nuevo muestra donde se está ubicado
print("Directorio actual")
print(os.getcwd())

# Crea el directorio xd
os.mkdir('xd')

# lista los subdirectorios del directorio actual
print("Subdirectorios")
print(os.listdir())

# Le cambia el nombre al directorio 3
os.rename('xd', 'new_one')
print("Subdirectorios después del cambio")
print(os.listdir())

# Elimina el directorio xd
os.rmdir('new_one')

# Vueleve al directorio padre
os.chdir(os.path.dirname(os.getcwd()))

# Elimina el directorio xd
os.rmdir('Python33')

'''
# Elimina el archivo myfile.txt
os.remove('myfile.txt')
'''
