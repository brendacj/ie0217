import os
import sys
sys.path.append(os.path.dirname(os.path.abspath(__file__)))
from ObtenerData import ObtencionDatos
from clustering import Clustering
from regression import Regresiones



def main():
    """Función principal del programa."""

    # Obtener y limpiar los datos
    datos = ObtencionDatos()
    data = datos.obtencionLimpieza()

    # Instanciar objeto de regresiones
    regresion = Regresiones(data)

    # Regresión lineal: precio de venta en función del año del carro
    print("Regresión lineal precio de venta en función del año del carro")
    regresion.datos = regresion.datos.sort_values(by='selling_price')
    regresion.regresionLineal('year', 'selling_price')

    # Regresión lineal: kilómetros recorridos en función del año del carro
    print("Regresión lineal kilometros recorridos en función del año")
    regresion.datos = regresion.datos.sort_values(by='selling_price')
    regresion.regresionLineal('year', 'km_driven')

    # Regresión polinómica: precio de venta en función del año del carro
    print("Regresión polinómica precio de venta en función del año")
    regresion.datos = regresion.datos.sort_values(by='selling_price')
    regresion.regresionNoLineal('year', 'selling_price', 2)

    # Regresión polinómica: precio de venta en
    # función de los kilómetros recorridos
    print("Regresión polinómica precio de venta en función de los"
          "kilometros recorridos")
    regresion.datos = regresion.datos.sort_values(by='km_driven')
    regresion.regresionNoLineal('year', 'km_driven', 3)

    # Instanciar objeto clustering
    cluster = Clustering(data)

    # Clustering según año y precio de venta
    print("\nClustering según año y precio de venta")
    cluster.silhouette('year', 'selling_price')
    cluster.kmeans('year', 'selling_price', 3)

    # Clustering según kilometros recorridos y precio de venta
    print("\nClustering según kilometros recorridos y precio de venta")
    cluster.elbow('km_driven', 'selling_price')
    cluster.kmeans('km_driven', 'selling_price', 2)


if __name__ == "__main__":
    main()
