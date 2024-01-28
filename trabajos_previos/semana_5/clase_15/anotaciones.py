import matplotlib.pyplot as plt

# Listas X y Y como los datos del gráfico
x = [1, 2, 3, 4, 5]

y = [10, 12, 5, 8, 14]

# Crear un grafico de linea .plot
plt.plot(x, y, label='Datos de ejemplo')

# Se agrega una anotación en (5, 14) con especificaciones
plt.annotate('Valor Maximo', xy=(5, 14), xytext=(3, 16),
    arrowprops=dict (facecolor='black', shrink=0.05),
    )

# Personalización
plt.xlabel('Eje X') # Etiqueta eje x
plt.xlabel('Eje Y') # Etiqueta eje y
plt.title('Grafico con Anotación') # Título
plt.legend() # Activar leyenda

# Mostrar el grafico
plt.show()
