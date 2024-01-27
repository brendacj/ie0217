# Tratar de ejecutar el código que podría fallar
try:
    # Variables
    numerator = 10
    denominator = 0
    # División entre 0 (Error)
    result = numerator/denominator
    print(result)
except:
    # De una vez agarra el error del bloque anterior
    # Se ejecuta si ocurrer un error
    print("Error: Denominator cannot be 0.")

## Excepciones multiples ##

try:
    # Trata de ejecutar el código que podría fallar
    even_numbers = [2,4,6,8]
    print(even_numbers[5])
# Se especifica el error, ya que podrían haber varios
except ZeroDivisionError:
    # Si se divide entre 0
    print("Denominator cannot be 0.")
except IndexError:
    # Si el indice está fuera del rango
    print("Index Out of Bound.")

## Uso de assert y else ##

# Tratar de insertar un número, pero debe ser 
# par(True) o va a dar un error
try:
    num = int(input("Enter a number: "))
    assert num % 2 == 0
# Si no se cumple el assert se levanta la excepción
except:
    print("Not an even number!")
# Si se cumple se ejecuta este bloque de código
else:
    ## Si se ingreesa un cero no es un error que se está manejando
    reciprocal = 1/num
    print(reciprocal)




