import matplotlib.pyplot as plt

# Listas de datos
categorias = ['A', 'B', 'C', 'D']
valores = [15, 8, 12, 10]

# Crear un grafico de barras, color royalblue, linea negra
plt.bar(categorias, valores, color='royalblue', edgecolor='black')

# Personalización
plt.xlabel('Categorías', fontsize=12) # Etiqueta eje X, tamaño 12
plt.ylabel('Valores', fontsize=12)  # Etiqueta eje Y, tamaño 12
plt.title('Grafico de Barras', fontsize=14) # Título tamaño 14
plt.xticks(rotation=45) # Rotar las etiquetas del eje X para mayor legibilidad
plt.grid(axis='y', linestyle='--', alpha=0.7) # Especificaciones
# Añadir etiquetas en las barras
for i, v in enumerate(valores):
    plt.text(i, v + 0.5, str(v), ha='center', va='bottom', fontsize=10)
# Mostrar el grafico
plt.show()
