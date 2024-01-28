import matplotlib.pyplot as plt

# Listas X y Y a graficar
x =[1, 2, 3, 4, 5]
y = [10, 12, 5, 8, 14]

# Gráfico de linea con leyenda "Datos de ejemplo"
plt.plot(x, y, label='Datos de ejemplo')

# Personalizacion
plt.xlabel('Eje X') #Etiqueta eje x
plt.ylabel('Eje Y') #Etiqueta eje y
plt.title('Grafico de Linea con Etiquetas y Titulo') # título
plt.legend() # Activar leyenda

# Mostrar el grafico
plt.show()
