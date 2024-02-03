# Importar las bibliotecas necesarias
from sklearn.cluster import KMeans
from sklearn.metrics import silhouette_score
import numpy as np
import matplotlib.pyplot as plt

# Datos para el ejemplo
# fuente
np.random.seed(42) 
#100 puntos bidimensionales de 0 a 100
X = np.random.rand(100, 2) * 10

#Lista de siluetas
silhouette_scores = []
for k in range(2, 20):
    # Calcular siluetas para 18 elementos con números aletorios
    kmeans = KMeans(n_clusters=k, random_state=42)
    kmeans.fit(X)
    score = silhouette_score(X, kmeans.labels_)
    silhouette_scores.append(score)

# Grafico de linea según las siluetas
plt.plot(range(2, 20), silhouette_scores, marker='o')
plt.title('Método de la Silueta')
plt.xlabel('Número de Clusters (k)')
plt.ylabel('Coeficiente de Silueta')
plt.show()

