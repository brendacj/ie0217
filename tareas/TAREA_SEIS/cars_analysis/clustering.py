"""
Este software está sujeto a los términos y condiciones de la Licencia MIT.
Entre otras cosas se establece que si se utiliza o distribuye partes
sustanciales del programa, se deben incluir el aviso de derechos de autor
y el aviso de permiso en tu distribución.
"""

from sklearn.cluster import KMeans
import matplotlib.pyplot as plt
from sklearn.metrics import silhouette_score


class Clustering ():
    """Clase para realizar tareas de clustering sobre un conjunto de datos."""

    def __init__(self, datos):
        """Inicializa la clase.

        Args:
            datos (DataFrame): Los datos sobre los que se realizarán las
            operaciones de clustering.
        """
        self.datos = datos

    def kmeans(self, columna1, columna2, clusters):
        """Aplica el algoritmo K-Means para realizar clustering.

        Args:
            columna1 (str): Nombre de la primera columna.
            columna2 (str): Nombre de la segunda columna.
            clusters (int): Número de clusters a generar.
        """
        # Obtener características relevantes para el clustering
        X = self.datos[[columna1, columna2]].values

        # Especificaciones de gráficos con los puntos sin organizar
        plt.figure(figsize=(12, 5))
        plt.subplot(1, 2, 1)
        # Caracteristicas
        plt.scatter(X[:, 0], X[:, 1], c='blue', marker='o')
        # Etiquetas y titulo
        plt.title('Puntos de Datos Aleatorios')
        plt.xlabel(columna1.replace('_', ' '))
        plt.ylabel(columna2.replace('_', ' '))

        # Aplicar K-Means
        kmeans = KMeans(n_clusters=clusters)
        kmeans.fit(X)
        labels = kmeans.labels_
        centroids = kmeans.cluster_centers_

        # Asignar etiquetas de cluster a los datos
        self.datos['cluster'] = labels

        print(self.datos.head())

        #  Especificaciones del gráfico de puntos organizados
        plt.subplot(1, 2, 2)
        for i in range(len(X)):
            # Una dispersión para cada cluster
            plt.scatter(X[i][0], X[i][1],
                        c=('r' if labels[i] ==
                           0 else 'b' if labels[i] == 1 else 'g'),
                        marker='o')

        # Caracteristicas generales de la figura
        plt.scatter(centroids[:, 0], centroids[:, 1], c='black',
                    marker='X', s=200, label='centroids')
        plt.title('Resultado del Clustering con K-Means')
        plt.xlabel(columna1.replace('_', ' '))
        plt.ylabel(columna2.replace('_', ' '))
        plt.legend()

        # Ajustar el diseño para evitar solapamientos
        plt.tight_layout()

        # Mostrar loa gráficos
        plt.show()

    def elbow(self, columna1, columna2):
        """Aplica el método del codo para determinar el
           número óptimo de clusters.

        Args:
            columna1 (str): Nombre de la primera columna.
            columna2 (str): Nombre de la segunda columna.
        """
        # Obtener características relevantes para el clustering
        X = self.datos[[columna1, columna2]].values

        # Calcular la inercia para diferentes valores de k
        inertias = []
        for k in range(1, 11):
            # Saca con Kmeans y prueba con números random
            kmeans = KMeans(n_clusters=k, random_state=42)
            # Ajusta
            kmeans.fit(X)
            # Agrega a la lista
            inertias.append(kmeans.inertia_)  # 11 elementos

        # Visualización del método del codo
        plt.plot(range(1, 11), inertias, marker='o')
        plt.title('Método del Codo')
        plt.xlabel('Numero de Clusters (k)')
        plt.ylabel('Inercia')
        plt.show()

    def silhouette(self, columna1, columna2):
        """Aplica el método de la silueta para determinar
           el número óptimo de clusters.

        Args:
            columna1 (str): Nombre de la primera columna.
            columna2 (str): Nombre de la segunda columna.
        """
        # Obtener características relevantes para el clustering
        X = self.datos[[columna1, columna2]].values

        # Calcular el coeficiente de silueta para diferentes valores de k
        # Lista de siluetas
        silhouette_scores = []
        for k in range(2, 20):
            # Calcular siluetas para 18 elementos con números aletorios
            kmeans = KMeans(n_clusters=k, random_state=42)
            kmeans.fit(X)
            score = silhouette_score(X, kmeans.labels_)
            silhouette_scores.append(score)

        # Visualización del método de la silueta
        plt.plot(range(2, 20), silhouette_scores, marker='o')
        plt.title('Método de la Silueta')
        plt.xlabel('Número de Clusters (k)')
        plt.ylabel('Coeficiente de Silueta')
        plt.show()
