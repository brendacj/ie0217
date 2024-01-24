# Casting implicito

integer_num = 123
float_number = 1.23

# Internamente se sabe que debe convertirse a float
new_number = integer_num + float_number

print("Value: ", new_number)
print("Data type: ", type(new_number))

# Comversión explicita, cuando no se puede hacer internamente
num_string = '12'
num_integer = 23

print("Data type of num_string before type Casting", type(num_string))

# Se usa esta sintaxis para cambiarle el tipo manualmente
num_string = int(num_string)
print("Data type of num_string after type Casting", type(num_string))

new_sum = num_integer + num_string
print("sum: ", new_sum)
print("Data type of num_sum: ", type(new_sum))
