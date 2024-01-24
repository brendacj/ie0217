#print(objet= separator= end= file= flush=)

#Se puden impimir demás datos, no solo strings
number = -10.6
name = "IE0217"
# Se pueden imprimir cosas directamente
print(5)
print(number)
print(name)

# Forma, separar con una suma para contatenar strings
print("Este curso es " + name)

#Se especifica lo que va a separar los datos del string (Al final no se pone solo en medio)
print("New year", 2023, "see you soon", sep= ". ")

#Se especifica con qué debe terminar el string, es este caso no queda pegado con el próximo print
print("Good morning!", end= " ")
print("It is rainy today")

#Se puede usar con llaves y formar de esta manera:
x = 5
y = 10
print("The value of x is {} and y is {}".format(x,y))