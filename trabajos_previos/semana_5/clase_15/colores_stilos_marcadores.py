import matplotlib.pyplot as plt

# Listas X y Y como los datos del gráfico
x = [1, 2, 3, 4, 5]
y = [10, 12, 5, 8, 14]

# Crear un grafico de linea punteada de color azul, marcador o y leyenda
plt.plot(x, y, color='blue', linestyle='--', marker='o', label='Serie A')

# Personalización
plt.ylabel('Eje Y') # Etiqueta eje x
plt.ylabel('Eje Y') # Etiqueta eje y
plt.title('Grafico Personalizado') # Título
plt.legend() # Activar la leyenda

# Mostrar el grafico
plt.show()
