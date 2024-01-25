# Recorrer un string con un for, caracter por caracter
for x in "Python":
    print(x)

# Un rango de 0 a 4 por defector
values = range(4)
# iterar el rango
for i in values:
    print(i)


languages = ['Swift', 'Python', 'Go']
# Solamente es para iterar el tamaño de la lista
for _ in languages:
    # Se ejecuta esto, no es el valor
    print('Hello')
    print('Hi')

# Else después de un for 
for i in languages:
    print(i)
else:
    #Cuando se itera todo
    print("No items left.")