# Para decir que no se sabe el número de parametros se pone*
def find_sum(*numbers):
    result = 0
    for num in numbers:
        result = result + num
    print("Sum = ", result)

# Llama con 3 parametros
find_sum(1, 2, 3)
# Llama con dos parametros
find_sum(4, 9)