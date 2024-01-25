# Crear diccionarios de strings e imprimrilo
capital_city = {"Nepal": "Kathmandu", "Italy": "Rome", "England": "London"}
print(capital_city)

# Diccionarios ocn claves y valores de tipos diferentes
numbers = {1: "One", 2: "Two", 3: "Three"}
print(numbers)


# Agregar un nuevo elemento a un diccionario
capital_city = {"Nepal": "Kathmandu", "England": "London"}
print("Initial Dictionary: ",capital_city)
capital_city["Japan"] = "Tokyo"
print("Updated Dictionary: ",capital_city)


# Cambiar el valor de una clave
student_id = {111: "Eric", 112: "Kyle", 113: "Butters"}
print("Initial Dictionary: ", student_id)
student_id[112] = "Stan"
print("Updated Dictionary: ", student_id)

## Acceder al valor de una clave
student_id = {111: "Eric", 112: "Kyle", 113: "Butters"}
print(student_id[111]) 
print(student_id[113]) 


# Eliminar un elemento del diccionario
student_id = {111: "Eric", 112: "Kyle", 113: "Butters"}
print("Initial Dictionary: ", student_id)
del student_id[111]
print("Updated Dictionary ", student_id)


# Eliminar el diccionario
student_id = {111: "Eric", 112: "Kyle", 113: "Butters"}
del student_id
## Error
#print(student_id)


# Membership Test para diccionarios
squares = {1: 1, 3:9, 5:25, 7: 49, 9: 81}

# Están en? 
# Busca las claves, no los valores, booleanos
print(1 in squares)
print(2 not in squares) 
print(49 in squares) 


# También se puede iterar sobre un diccionaria
squares = {1:1, 13:80, 85:805, 17:540, 0:81}
for i in squares:
    # Así se accede a los valores y no a las claves
    print(squares[i])



