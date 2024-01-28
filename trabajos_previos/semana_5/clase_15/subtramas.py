import matplotlib.pyplot as plt
# Listas para los datos de los gráficos (dos)
x = [1, 2, 3, 4, 5]
y1 =[10, 12, 5, 8, 14]
y2 = [5, 8, 9, 6, 10]

# Crear subtrama con 1 fila y 2 columnas
fig, axs = plt.subplots(1, 2)

# Para le gráfico de la primera subtrama
axs[0].plot(x, y1, label='Serie A') # Leyenda
axs[0].set_title('Subtrama 1') # Título primera subtrama

# Para el gráfico de la segunda sutrama
axs[1].plot(x, y2, label='Serie B', color="red") # Lyenda y colo rojo
axs[1].set_title('Subtrama 2') # Título segunda subtrama

# Personalización
for ax in axs:
    plt.xlabel('Eje X') # Etiqueta eje x
    plt.xlabel('Eje Y') # Etiqueta eje y
    plt.legend() # Activar leyenda

# Ajuste a la disposición
plt.tight_layout()
# Mostrar figuras
plt.show()
