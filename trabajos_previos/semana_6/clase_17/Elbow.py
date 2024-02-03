# Importar las bibliotecas necesarias
from sklearn.cluster import KMeans
import numpy as np
import matplotlib.pyplot as plt


# Datos para el ejemplo
# fuente
np.random.seed(42) 
#100 puntos bidimensionales en un rango de 0 a 100
X = np.random.rand(100, 2) * 10


# Calcular la inercia de diferentes valores
inertias = []
for k in range(1, 11):
    # Saca con Kmeans y prueba con números random
    kmeans = KMeans(n_clusters=k, random_state=42)
    # Ajusta
    kmeans.fit(X)
    # Agrega a la lista
    inertias.append(kmeans.inertia_) # 11 elementos

# Grafico de linea según las inercias
plt.plot(range(1, 11), inertias, marker='o')
plt.title('Método del Codo')
plt.xlabel('Numero de Clusters (k)')
plt.ylabel('Inercia')
plt.show()
