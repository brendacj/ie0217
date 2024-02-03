# Importar las bibliotecas necesarias
from sklearn.cluster import KMeans
import numpy as np
import matplotlib.pyplot as plt

# Generar datos ejemplo
# Fuente
np.random.seed(42)
#100 puntos bidimensionales en un rango de 0 a 10
X = np.random.rand(100, 2) * 10

# Especificaciones de gráficos con los puntos sin organizar
plt.figure(figsize=(12, 5))
plt.subplot(1, 2, 1)
# Caracteristicas
plt.scatter(X[:, 0], X[:, 1], c='blue', marker='o')
# Etiquetas y titulo
plt.title('Puntos de Datos Aleatorios')
plt.xlabel('Caracteristica 1')
plt.ylabel('Caracteristica 2')

# Crear el modelo k-means
# Número de clusters que se debe especificar antes de tod
kmeans = KMeans (n_clusters=3)
# Ajustar el modelo al arreglo X
kmeans.fit(X)

# Acceder a los atributos labels y centroids del modelo
labels = kmeans.labels_
centroids = kmeans.cluster_centers_

#  Especificaciones del gráfico de puntos después de organizar
plt.subplot(1, 2, 2)
for i in range(len(X)):
    # Una dsipersión para cada cluster
    plt.scatter(X[i][0], X[i][1],
        c=('r' if labels[i] == 0 else 'b' if labels[i] == 1 else 'g'),
        marker='o')

# Caracteristicas generales de la figura
plt.scatter(centroids[:, 0], centroids[:, 1], c='black', marker='X', s=200,
    label= 'centroids')
plt.title('Resultado del Clustering con K-Means')
plt.xlabel('Caracteristica 1')
plt.ylabel('Caracteristica 2')
plt.legend()

# Ajustar el diseño para evitar solapamientos
plt.tight_layout()

# Mostrar loa gráficos
plt.show()

