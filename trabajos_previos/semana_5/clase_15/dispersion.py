import matplotlib.pyplot as plt
# Listas para el ejemplo, X y Y
x=[1,2,3,4,5]

y = [10, 12, 5, 8, 14]

# Crear el gráfico de dispersión con scatter, de leyenda "puntos"
plt.scatter(x, y, label='Puntos')
# Personalizacion
plt.xlabel('Eje X') # Etiqueta eje x
plt.ylabel('Eje Y') # Etiqueta eje y
plt.title('Grafico de Dispersion') # Titulo
plt.legend() # Activa la leyenda

# Mostrar el grafico
plt.show()
