# Forma de definir exepciones personalizadas con una clase
# Hereda de Exception
class InvalidAgeException(Exception):
    "Raised when the input value is less than 18"
    pass

# Número que debe superar el ingresado
number = 18
try:
    # Python no tiene una excepción por un número menor
    # que otro, el programa no va a fallar
    input_num = int(input("Enter a number: "))
    if input_num < number:
        # Se levanta un excepción manualmente con la clase creada
        raise InvalidAgeException
    else:
        # Sino no levanat ninguna excepción
        print("Eligible to Vote")
except InvalidAgeException: # Especiifcar el nombre de la excepción
    # Recibe y maneja la excepción
    print("Exception occurred: Invalid Age")
