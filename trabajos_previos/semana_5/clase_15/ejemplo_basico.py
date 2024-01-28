# Importar las bibliotecas
import matplotlib as mpl
import matplotlib.pyplot as plt
import numpy as np
# Crear una figura con ejes
fig, ax = plt.subplots()
# Recibe dos listas (x,y) 
ax.plot([1, 2, 3, 4], [1, 4, 2, 3])
# Realiza la graficación por defecto
plt.show()
