from ObtenerData import ObtencionDatos
import numpy as np
from sklearn.cluster import KMeans
import matplotlib.pyplot as plt
from sklearn.metrics import silhouette_score


class Clustering ():
    def __init__(self):
        self.datos = ObtencionDatos()
        self.datos.obtencionLimpieza()

    def kmeans (self, columna1, columna2):
        X = self.datos.dataSet[[columna1, columna2]].values

        # Especificaciones de gráficos con los puntos sin organizar
        plt.figure(figsize=(12, 5))
        plt.subplot(1, 2, 1)
        # Caracteristicas
        plt.scatter(X[:, 0], X[:, 1], c='blue', marker='o')
        # Etiquetas y titulo
        plt.title('Puntos de Datos Aleatorios')
        plt.xlabel(columna1.replace('_', ' '))
        plt.ylabel(columna2.replace('_', ' '))


        kmeans = KMeans(n_clusters=3)
        kmeans.fit(X)
        labels = kmeans.labels_
        centroids = kmeans.cluster_centers_

        self.datos.dataSet['cluster'] = labels
        print(self.datos.dataSet.head())

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
    
    def elbow (self, columna1, columna2):
        X = self.datos.dataSet[[columna1, columna2]].values
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

    def silhouette (self, columna1, columna2):

        X = self.datos.dataSet[[columna1, columna2]].values

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


cluster = Clustering ()
#cluster.datos.dataSet = cluster.datos.dataSet.sort_values(by='year')
cluster.silhouette ('year','selling_price')
cluster.kmeans ('year','selling_price')
# year,selling_price,km_driven