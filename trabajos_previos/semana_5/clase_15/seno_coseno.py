import matplotlib.pyplot as plt
import numpy as np

# Generar datos con ayuda de numpy
# Funciones de seno y coseno de números a lo
# largo del circulo trigonometrico
x = np.linspace(0, 2 * np.pi, 100)
y1 = np.sin(x)
y2 = np.cos(x)

# Crear dos gráficos de lineas en la misma figura
plt.plot(x, y1, label='Seno')
plt.plot(x, y2, label='Coseno')

#Personalización
plt.xlabel('Angulo (rad)') # Etiqueta eje x
plt.ylabel('Valor') # Etiqueta eje y
plt.title('Funciones Seno y Coseno') # Título
plt.legend() # Activar leyenda

# Mostrar el grafico
plt.show()
