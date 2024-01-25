# Función lambda: Función impreganada

greet = lambda : print('Hello World')

# Aquí la llama
greet()


# Otro ejemplo
greet_user = lambda name : print('Hey there,', name)

# Llamar con parametro
greet_user('Delilah')



# Función para filtrar 
my_list= [1, 5, 4, 36, 8, 11, 3, 12]

# FIltrado a mi list con uan condición
# Compacto
new_list = list(filter(lambda x: (x%2 == 0) , my_list))
print(new_list)




# Multiplica por dos todos los números de la lista
my_listt = [1, 5, 4, 6, 8, 11, 3, 12]

new_list = list(map(lambda x: x * 2 , my_list))
print(new_list)





