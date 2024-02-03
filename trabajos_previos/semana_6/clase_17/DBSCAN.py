import matplotlib.pyplot as plt
from sklearn.datasets import make_moons
from sklearn.cluster import DBSCAN

# Crear datos de ejemplo: Lunas crecientes
X, _ = make_moons(n_samples=200, noise=0.05, random_state=42)

# Configurar el modelo DBSCAN (elipse = 0.3, puntos min 5)
dbscan = DBSCAN(eps=0.3, min_samples=5)
dbscan_labels = dbscan.fit_predict(X)

# Especificaciones y visualización del DBSCAN
plt.scatter(
    X[:, 0], X[:, 1], c=dbscan_labels, cmap='viridis', edgecolor='k', s=50)
plt.title('Resultado del Clustering DBSCAN')
plt.xlabel('Caracteristica 1')
plt.ylabel('Caracteristica 2')
plt.show()
