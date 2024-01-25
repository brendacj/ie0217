print("Hola mundo")

contador = 0

contador = 15

print("El valor del contador es:", contador)
print("El valor del contador es: "+ str(contador))

# Ejemplo if
if (contador > 10 ):
    print("Contador mayor a 10")
    print("Hola desde el if")
    if(contador < 18):
        print("Además es menor que 18")

print("Esto está fuera del if")


# Ejemplo if normal
number = 10
# Número mayor que 0?
if number > 0:
    print( "Number is positive.")
print("The if statement is easy")


# Ejemplo if else

if number > 0:
    print( "Number is positive.")
else: #Sino se ejecuta esta parte
    print( "Negative number.")

print("The if statement is always executed")

#Ejemplo if else:
number = 0
# Si es positivo
if number > 0:
    print("Positive number")
# Si es igual a cero
elif number == 0:
    print('Zero')
#Sino si o si es negativo
else:
    print("Negative number")

print("This statement is always executed")


