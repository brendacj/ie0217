# Se imprimen los elementos solo una vez, no repetidos
numbers = {2, 4, 6, 6, 2, 8}
print(numbers)

# Se puede agregar un elemnto con add, siempre es orden al azar
numbers = {21, 34, 54, 12}
print('Initial Set:', numbers)
numbers.add(32)
print('Updated Set:', numbers)

# Puedo subir una lista al set, y se va a imprimir solo una vez los elementos iguales
companies = {'Lacoste', 'Ralph Lauren'}
tech_companies = ['apple', 'google', 'apple']
companies .update(tech_companies)
print(companies)


# Con discard se pueden eliminar elementos
languages = {'Swift', 'Java', 'Python'}
print('Initial Set:', languages)
removedValue = languages.discard('Java')
print('Set after remove():', languages)


#Imprimir set de enteros
student_id = {112, 114, 116, 118, 115}
print('Student ID:', student_id)

#Imprimir set de caracteres
vowel_letters = {'a', 'e', 'i', 'o', 'u'}
print('Vowel Letters:', vowel_letters)

# Imprimir ser de elementos mixtos
mixed_set = {'Hello', 101, -2, 'Bye'}
print('Set of mixed data types:', mixed_set)



#Crear un set vacio
empty_set = set()

# No se pueden usar las llaves vacias porque eso es uns diccionarios
empty_dictionary = { }

#Imprimir
print('Data type of empty_set:', type(empty_set))
print('Data type of empty dictionary', type(empty_dictionary))


# Se pueden usar los set en ciclos
fruits = {"Apple", "Peach", "Mango"}
for fruit in fruits:
    print(fruit)



even_numbers = {2,4,6,8}
print('Set:',even_numbers)
# Se puede acceder al tamaño de los sets con len()
print('Total Elements:', len(even_numbers))





