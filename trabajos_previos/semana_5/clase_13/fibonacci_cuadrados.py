# Generador de los números de fibonacci
def fibonacci_numbers(nums):
    x, y=0,1
    for _ in range(nums):
        x, y = y, x+y
        yield x

# Generador de cuadrados
def square(nums):
    for num in nums:
        yield num**2
    
# Imprimir la suma de los cuadrados de los primeros 10 números de fibonacci
print(sum(square(fibonacci_numbers(10))))
