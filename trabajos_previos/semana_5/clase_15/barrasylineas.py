import matplotlib.pyplot as plt
# Listas de datos
categorias = ['A', 'B', 'C', 'D']
valores = [15, 8, 12, 10]
tendencia = [5, 10, 8, 13]

# Gráficos de dos subtramas de diferente tipo
fig, axs = plt.subplots(1, 2, figsize=(10, 4))

# Subtrama 1 con un gráfico de barras
axs [0].bar(categorias, valores, color='royalblue')
axs[0].set_title('Grafico de Barras')

# Subtrama 2 con un gráfico de línea
axs[1].plot (categorias, tendencia, color='green', marker='o')
axs[1].set_title('Gráfico de Linea')

#Personalización
for ax in axs:
    ax.set_xlabel('Categorías') # Etiqueta eje x
    ax.set_ylabel('Valores') # Etiqueta eje y

# Ajustar la disposición
plt.tight_layout()

# Mostrar 1a Figuras
plt.show()
