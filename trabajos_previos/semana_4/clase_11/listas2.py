## Agregar un 32 al final de la lista
numbers = [21, 34, 54, 12]
print("Before Append:", numbers)
numbers .append(32)
print("After Append:", numbers)


# Cambiar un elemento
languages = ['Python', 'Swift', 'C++']
languages[2] = 'C'
print(languages)


# Extender una lista con otra, una después de otra
prime_numbers = [2, 3, 5]
print("List1:", prime_numbers)
even_numbers = [4, 6, 8]
print("List2:", even_numbers)
prime_numbers.extend(even_numbers)
print("List after append:", prime_numbers)


# Eliminar elementos de la lista mediante el indice
languages = ['Python', 'Swift', 'C++', 'C', 'Java', 'Rust', 'R']
# Por indice
del languages[1]
print(languages)
# Por indice hacía atrás
del languages[-1]
print(languages)
# Eliminar un rango
del languages[0 : 2] 
print(languages)

#Eliminar por nombre del elemento
languages = ['Python', 'Swift', 'C++', 'C', 'Java', 'Rust', 'R']
languages .remove( 'Python')
print(languages)




