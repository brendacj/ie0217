i = 1
n=5
# Mientras i sea menor o igual a n se ejecuta
while i <= n:
    print(i)
    # Se aumenta i
    i = i +1

# Suma de números
    
total = 0
number = int(input('Enter a number: '))
# Mientras que sea diferentes de 0 va a saumar números
while number != 0:
    total += number
# take integer input again
    number = int(input('Enter a number: '))

# Se imprime el total
print('total =', total)


# Else fuera del ciclo
counter = 0
# Mientras sea menor que 3
while counter < 3:
    print('Inside loop')
    # Se aumenta
    counter = counter + 1
else:
    # Cuando termina el ciclo se ejecuta esto:
    print( "Inside else")


age = 32
# Esto no se va a detener porque nada cambia
while age > 18:
    print('You can vote')