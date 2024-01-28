import matplotlib.pyplot as plt

# Lista para el gráfico (datos)
datos = [15, 25, 30, 35, 40, 45, 50, 60, 70, 80, 90]

# Grafico de caja de bigotes (.boxplot)
plt.boxplot(datos)

# Personalización
plt.ylabel('Valores') # Etiqueta eje y

plt.title('Grafico de Caja') # Título

# Mostrar el grafico
plt.show()
