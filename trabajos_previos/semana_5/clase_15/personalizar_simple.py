import matplotlib.pyplot as plt

# Defino dos listas para el grafico como x y y
x =[1, 2,3, 4,5]

y = [10, 12, 5, 8, 14]

# Crear un grafico de linea (Por defecto)
plt.plot(x, y)

# Personalización, le cargo las especificaciones al plt
plt.xlabel('Eje X') #Etiqueta de eje x
plt.ylabel('Eje Y') #Etiqueta de eje y
plt.title('Grafico de Linea Simple') # Titulo del grafico
plt.grid(True) # Activar la cuatricula

# Graficar
plt.show()
