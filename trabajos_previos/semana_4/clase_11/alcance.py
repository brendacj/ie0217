def greet():
    message = 'Hello'
    print( 'Local', message)

greet()
# no puede acceder a esta variable porque está dentro del bloque

#print(message)


## 
# Variable local
message = 'Hello'
def greet():
    # Puede acceder aquí
    print('Local', message)

greet()
# Puede acceder aquí
print( 'Global', message)


# Función dentro de una función
def outer():
    message = 'local'
    # Función interna
    def inner():
        # no local
        nonlocal message
        message = 'nonlocal'
        print('inner:', message)
    ## Llama la función onterna
    inner()
    # Puedo acceder a la variable
    print("outer:", message)

outer()

