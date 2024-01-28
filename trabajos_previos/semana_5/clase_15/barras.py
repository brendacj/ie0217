import matplotlib.pyplot as plt

# Listas X y Y para el gráfico
categorias=['A','B','C','D']
valores = [15, 8, 12, 10]

# Grafico de barras verticales (.bar), de color royalblue
plt.bar(categorias, valores, color='royalblue')

# Personalizacidn
plt.xlabel('Categorias') # Etiqueta eje x
plt.ylabel('Valores') # Etiqueta eje x
plt.title('Grafico de Barras Verticales') # título

# Mostrar el grafico
plt.show()
