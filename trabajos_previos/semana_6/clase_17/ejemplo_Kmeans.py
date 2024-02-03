# Importar las bibliotecas necesarias
from sklearn.preprocessing import StandardScaler
import pandas as pd
import matplotlib.pyplot as plt
from sklearn.cluster import KMeans

# Preparación de datos
# Carga el archivo a utilizar, ya se sabe qué contiene
data = pd.read_csv('data.csv')

# Imprimir la primera parte de los datos
print(data.head())

# Preprocesamiento: Limpiar los datos para que sirva el algoritmo
# Usar esta función
scaler = StandardScaler()
# Pasar el conjunto de datos (data) para que lo limpie
scaled_data = scaler.fit_transform(data)


# USAR EL MÉTODO DEL CODO PARA ENCONTRAR EL NÚMERO DE CLUSTERS

inertia = [] # Lista de inercias
for k in range(1, 11):
    # Calcular la inercia 11 veces de manera aletoria
    kmeans = KMeans(n_clusters=k, random_state=42)
    kmeans.fit(scaled_data)
    inertia.append(kmeans.inertia_)

# Graficar una linea según las inercias
plt.plot(range(1, 11), inertia, marker='o')
plt.title('Método del Codo para Seleccién de k')
plt.xlabel('Numero de Clusters (k)')
plt.ylabel('Inercia')
plt.show()

### Según el método del codo una buena elección de número
## de clusters es 6

# Aplica un modelo kmeans con n_clusters = 6
kmeans = KMeans(n_clusters=6, random_state=42)
# Los datos ya limpios
cluster_labels = kmeans.fit_predict(scaled_data)

# Agregamos los clousters a data
data['Cluster'] = cluster_labels


# Analisis de segmentos
segment_analysis = data.groupby('Cluster').mean()

# Imprimir para cada cluster
plt.figure(figsize=(12, 6))
for cluster in range(6):
    plt.scatter(data[data[ 'Cluster'] == cluster]['Frequency'],
                data[data[ 'Cluster'] == cluster]['Avg_Spend'],
                label=f'Cluster {cluster}')

# Especificaciones de la figura
plt.title('Segmentacion de Clientes por Frecuencia y Gasto Promedio')
plt.xlabel('Frecuencia de Visita')
plt.ylabel('Gasto Promedio')
plt.legend()
plt.show()





