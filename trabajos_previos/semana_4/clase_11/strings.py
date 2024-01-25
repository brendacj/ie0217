# variables string
name = "Python"
print(name)

message = "I love Python."
print(message)

# Acceder como una lista
greet = 'hello'
print(greet[-4]) 

# Con rangos
greet = 'hello'
print(greet[1:4])

# Esto no se puede hacer
'''
message = 'Hola Amigos'
message[0] = 'H'
print(message)
''' 

# Renombrar un string
message = 'Hola Amigos'
message = 'Hello Friends'
print(message); 


# Multiplinea
message = """"
Never gonna give you up
Never gonna let you down
"""

## Comparaciones entre strings
str1 = "Hello, world!"
str2 = "I love Python."
str3 = "Hello, world!"
print(str1 == str2)
print(str1 == str3)

# Si está en (bool)
print('a' in 'program') # True
print('at' not in 'battle') # False

# Concatenar dos strings
greet = "Hello, "
name = "Jack"
result = greet + name
print(result)

# Iterar el string
greet = "Hello"
for letter in greet:
    print(letter)

# Tamaño del string
greet = 'Hello'
print(len(greet))


# Escapar caracteres
example = "He said, \"What's there?\""
example = 'He said, "What\'s there?"'
print(example)

# Imprimir de esta forma
name = 'CAUTHY'
country = 'UK'
print(f'{name} is from {country}')









