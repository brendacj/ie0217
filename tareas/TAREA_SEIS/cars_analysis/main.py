from ObtenerData import ObtencionDatos
from clustering import Clustering
from regression import Regresiones

def main():
    datos = ObtencionDatos()
    data = datos.obtencionLimpieza()

    regresion = Regresiones(data)

    print("Regresión lineal precio de venta en función del año del carro")
    regresion.datos = regresion.datos.sort_values(by='selling_price')
    regresion.regresionLineal('year','selling_price')

    print("Regresión lineal kilometros recorridos en función del año del carro")
    regresion.datos = regresion.datos.sort_values(by='selling_price')
    regresion.regresionLineal('year','km_driven')

    print("Regresión polinómica precio de venta en función del año del carro")
    regresion.datos = regresion.datos.sort_values(by='selling_price')
    regresion.regresionNoLineal('year','selling_price', 2)
    #regresion.regresionNoLineal('year','km_driven', 3)

    print("Regresión polinómica precio de venta en función de los kilometros recorridos")
    regresion.datos = regresion.datos.sort_values(by='km_driven')
    #regresion.regresionNoLineal('km_driven','selling_price', 4)
    regresion.regresionNoLineal('year','km_driven', 3)


    cluster = Clustering (data)
    #cluster.datos.dataSet = cluster.datos.dataSet.sort_values(by='year')
    print("\nClustering según año y precio de venta")
    cluster.silhouette('year','selling_price')
    cluster.kmeans('year','selling_price', 3)

    print("\nClustering según kilometros recorridos y precio de venta")
    cluster.elbow('km_driven','selling_price')
    cluster.kmeans('km_driven','selling_price', 2)
    # year,selling_price,km_driven

main()