# Importar bibliotecas necesarias
import matplotlib.pyplot as plt
from scipy.cluster.hierarchy import dendrogram, linkage
from sklearn.datasets import make_blobs
from sklearn.cluster import AgglomerativeClustering

# Crear datos ejemplo: Manchas de muestras (clusters)
X, y = make_blobs(n_samples=50, centers=3, random_state=42, cluster_std=1.0)

# Crear el denograma
Z = linkage(X, method='complete')


# Vizualizar el denograma
plt.figure(figsize=(10, 5))
dendrogram(Z)

plt.title( 'Dendrograma Hierarchical Clustering')
plt.xlabel('Indice del Punto de Datos')
plt.ylabel ('Distancia')
plt.show()

# Usar aglomerativo como configuración (3 clousters)
agg_clustering = AgglomerativeClustering(n_clusters=3)
# Predicción
agg_labels = agg_clustering.fit_predict(X)

# Especificaciones y visualización
plt.scatter(
    X[:, 0], X[:, 1], c=agg_labels, cmap='viridis', edgecolor='k', s=50)
plt.title('Resultado del Clustering Jerárquico')
plt.xlabel('Caracteristica 1')
plt.ylabel('Caracteristica 2')
plt.show()


