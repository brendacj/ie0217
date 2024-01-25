# Recursividad: esta es la sintaxis
def factorial(x):
    '''Para encontrar el factorial de un número'''
    if x == 1:
        return 1
    else:
        # x por el factorial del anterior
        return (x * factorial(x-1))
    
# Llama con 3
num = 3
print("The factorial of", num, "is", factorial(num))
