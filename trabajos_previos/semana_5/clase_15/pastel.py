import matplotlib.pyplot as plt

# Listas X y Y para el gráfico
proporciones = [30, 20, 25, 15]
etiquetas = ['A', 'B', 'C', 'D']

# Gráfico de pastel (.pie), con los datos proporciones y etiquetas
# número de decimales y en qué ángulo inicia
plt.pie(proporciones, labels=etiquetas, autopct='%1.1f%%', startangle=140)
# Colores de las secciones
colors= [ 'gold', 'lightcoral', 'lightgreen', 'lightskyblue']

# Personalizacion
plt.title('Grafico de Pastel') # Título

# Mostrar el grafico
plt.show()
