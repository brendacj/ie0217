## Este es un archivo de pruebas, nada va a funcionar porque depende de los directorio propios"
# Importar os para manejo de archivos y directorios
import os
# Imprime el directorio donde se está ubicado
print(os.getcwd())
'''
# Cambia al directorio Python33
os.chdir('C:\\Users\\Usuario\\Desktop\\ie0217\\ie0217\\trabajos_previos\\semana_5\\Python33')
# De nuevo muestra donde se está ubicado
print(os.getcwd())
# Elimina el directorio xd
os.rmdir("C:\\Users\\Usuario\\Desktop\\ie0217\\ie0217\\trabajos_previos\\semana_5\\xd")
# Elimina el archivo myfile.txt
os.remove("C:\\Users\\Usuario\\Desktop\\ie0217\\ie0217\\trabajos_previos\\semana_5\\myfile.txt")

'''
# lista los subdirectorios del directorio actual
os.listdir()
# Lista los dsubdirectorios del directorio Python33
os.listdir('C:\\Users\\Usuario\\Desktop\\ie0217\\ie0217\\trabajos_previos\\semana_5\\Python33')
# Crea el directorio test
os.mkdir('test')
# Le cambia el nombre al directorio 3
os.rename('test', 'new_one')
os.listdir()
