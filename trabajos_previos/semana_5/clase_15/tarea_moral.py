import matplotlib.pyplot as plt
import numpy as np

# Listas de datos del ejemplo
categorias = ['A', 'B', 'C', 'D']
valores1 = [15, 8, 12, 10]
valores2 = [12, 10, 15, 7]
tendencia = [11, 9, 13, 9]

# Crear la figura y ejes
fig, ax = plt.subplots()

# Especificar ancho de banda y creación de índice para las categorias
ancho_barra = 0.35
indice = np.arange(len(categorias))

# Crear gráficos de barras agrupados para vaalores1 y valores2
barl = ax.bar(indice - ancho_barra / 2, valores1, ancho_barra, label='Serie 1',
               color = 'royalblue') # Leyenda y color

bar2 = ax.bar(indice + ancho_barra / 2, valores2, ancho_barra, label='Serie 2',
              color='lightcoral') # Leyenda y color

# Ahora se crea una linea de tendencia  con la lista tendencia
# Leyenda, marcador o y color verde
ax.plot(indice, tendencia, label='Tendencia', marker='o', color='green')

# Personalización
ax.set_xlabel('Categorias') # Etiqueta del eje x
ax.set_ylabel('Valores') # Etiqueta del eje y
ax.set_title('Grafico de Barras Agrupadas con Tendencia')  # Título del gráfico
ax.set_xticks(indice)  # Marcas en el eje x en las posiciones definidas por el índice
ax.set_xticklabels(categorias)  # Etiquetas en el eje x correspondientes a las categorías
ax. legend()  # Mostrar la leyenda

# Añadir etiquetas en las barras
for bar in [barl, bar2]:
    for rect in bar:
        # A cada barra se le pone la altura como etiqueta
        height = rect.get_height()
        ax.annotate('{}'.format (height),
            xy=(rect.get_x() + rect.get_width() / 2, height),
            xytext=(0, 3), # Desplazamiento vertical de la etiqueta
            textcoords="offset points",
            ha='center', va='bottom') # Especificaciones de espacio

# Mostrar el grafico
plt.grid(axis='y', linestyle='--', alpha=0.7)   # Activar la cuadrícula en el eje y
plt.tight_layout()  # Ajustar el diseño del gráfico para evitar solapamientos
plt.show()
