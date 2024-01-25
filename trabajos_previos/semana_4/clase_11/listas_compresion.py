# Imprimir cada elemento de la lista languages 
languages = ['Python', 'Swift', 'C++']
for language in languages:
    print(language)

# Verificar con in si está un elemnto
languages = ['Python', 'Swift', 'C++']
print('C' in languages)
print('Python' in languages)


# Calcular el largo de la lista
languages = ['Python', 'Swift', 'C++']
print("List: ", languages)
print("Total Elements: ", len(languages))

## List comprehensions
# Realizar la implementación dentro de la lista
# number*number en todos los elementos
numbers = [number*number for number in range(1, 6)]
print (numbers)
# Output: [1, 4, 9, 16, 25]

# Forma de hacerlo más largo
numbers = []
for x in range(1, 6):
    numbers.append(x * x)


