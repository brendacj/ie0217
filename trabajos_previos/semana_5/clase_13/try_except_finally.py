# Tratar de ejecutar el código
try:
    numerator = 10
    denominator = 0
    # División entre 0
    result = numerator/denominator
    print(result)
except:
    # Se lanza la excepeción, (Cualquier error)
    print("Error: Denominator cannot be 0.")
finally:
    # Esto se ejecuta siempre, es para tener dos bloques separados
    print("This is finally block.")
