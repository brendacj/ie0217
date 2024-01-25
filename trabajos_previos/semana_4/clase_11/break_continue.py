# Rompe la estuctura del bucle
for i in range(5):
    if i == 3:
        break
    print(i)

# Aquí se rompe el ciclo también al cumpkir una condición
i=1
while i <= 10:
    print("6 * ", (i), "=", 6*i)
    if i >= 5:
        break
    i=i+1


# Cuando i es igual a 3 se dalta esa iteración y continúa en la siguiente
for i in range(5):
    if i == 3:
        continue
    print(i)

#Aquí continua a la siguiente ieración si es divisible entre 2
num = 0
while num < 10:
    num += 1
    if (num % 2) == 0:
        continue
    print(num)


### pass ###
# pass: No hacer nada y pasar a las siguientes líneas   
n = 10
if n > 10:
    pass
print("Hello")

# Esto da error
'''
n = 10
if n > 10:
    # Hacer esto despuéss
print("Hello")
'''

# Se puede hacer con funciones y clases
def function(args):
    pass

class Example:
    pass