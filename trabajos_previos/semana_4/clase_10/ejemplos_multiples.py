# Variables de diferentes tipos, python interpreta qué tipo es
# Se accede al tipo con type()
num1 = 5
print(num1, 'is of type', type(num1))

num2 = 2.5
print(num2, 'is of type', type(num2))

num3 = 1+2j
print(num3, 'is of type', type(num3))

#Listas

#Lista de strings
lenguages = ["Swift", "Java", "Python"]
#Accede a los elementos de los indices con []
print(lenguages[0])
print(lenguages[2])

# Tupla

product = ("Microsoft", "Xbox", 499.99)
# accede igual que las listas
print(product[0])
print(product[1])

#Strings

name ='python'
print(name)

message = 'Python for beginners'
print(message)


#Set

#Si se gurdan más valores iguales se imprime solo uno, son únicos, no repetidos
student_id = {112, 114, 116, 118, 115}

print(student_id)

print(type(student_id))

# Diccionarios

#Claves y valores, a cada clase se le asigna un valor
capital_city = {'Nepal':'Kathmandu', 'Italy': 'Rome', 'England': 'London'}
# Se puede imprimir todo el diccionario
print(capital_city)
#Accedo a los valores mediante las claves, no directamente
print(capital_city['Nepal'])
# print(capital_city['Kathmandu']) #Error