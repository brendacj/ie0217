"""
Este software está sujeto a los términos y condiciones de la Licencia MIT.
Entre otras cosas se establece que si se utiliza o distribuye partes
sustanciales del programa, se deben incluir el aviso de derechos de autor
y el aviso de permiso en tu distribución.
"""

from filtroporaerolinea import FiltroPorAerolinea
from filtroespecifico import FiltroEspecifico
from analisisdedatos import AnalisisDeDatos
import pandas as pd


def main():
    """
    Función principal para ejecutar el análisis de datos.

    Realiza filtros y análisis de datos sobre un conjunto
    de datos de aerolíneas.
    """
    # Filtros

    # Filtrar por aerolínea ADVANCED AIR, LLC, objeto
    filtroAero = FiltroPorAerolinea('ADVANCED AIR, LLC')
    print("\n⛥⛥⛥⛥"
          " ENCABEZADO DE TABLA ORIGINAL "
          "⛥⛥⛥⛥\n")
    # Primero el encabezado original
    print(filtroAero.datos.aerolineas.head(10))

    df_filtrado = pd.DataFrame(
        [fila for fila in filtroAero],
        columns=filtroAero.datos.aerolineas.columns)
    print("\n⛥⛥⛥⛥"
          " TABLA FILTRADA POR AEROLINEA"
          " (ADVANCED AIR, LLC)"
          "⛥⛥⛥⛥\n")
    # Filtrado por aerolinea
    print(df_filtrado)

    # Filtrar por datos especificos: objeto
    filtroEs = FiltroEspecifico(3500, 300)
    df_filtradoEs = pd.DataFrame(
        [fila for fila in filtroEs], columns=filtroEs.datos.aerolineas.columns)
    print("\n⛥⛥⛥⛥"
          " TABLA FILTRADA POR DISTANCIA Y PASAJEROS"
          " (Distancia mayor a 3000 millas y menos de 300 pasajeros)"
          "⛥⛥⛥⛥\n")
    # Imprimir
    print(df_filtradoEs)

    # Análisis

    analisis = AnalisisDeDatos()
    print("\n⛥⛥⛥⛥"
          " Resumen de valores descriptivos"
          " (Tabla Original) "
          "⛥⛥⛥⛥\n")
    # Imprimri valores descriptivos de la tabla original
    analisis.ValoresDescriptivos()
    # Mostrar analisis de promedio móvil para la distancia
    # De la tabla original
    analisis.identificarTendencias('DISTANCE')

    # Obtiene los dataFrame de los informes
    df1, df2 = analisis.imprimirInformes()
    print("\n⛥⛥⛥⛥"
          " Informe de Viajes por Aerolinea"
          " (Número de viajes y distancias totales recorridas) "
          "⛥⛥⛥⛥\n")
    # Imprime el primero
    print(df1)

    print("\n⛥⛥⛥⛥"
          " Informe de Viajes por Aerolinea"
          " (5 primeras aerolíneas con más vuelos) "
          "⛥⛥⛥⛥\n")
    # Imprime el primero ordenado por número de viajes
    print(df1.sort_values(by='Número de Viajes', ascending=False). head(5))

    print("\n⛥⛥⛥⛥"
          " Informe de Pasajeros por Aerolinea"
          " (Pasajerso totales y según clase) "
          "⛥⛥⛥⛥\n")
    # Imprime el segundo
    print(df2)

    print("\n⛥⛥⛥⛥"
          " Informe de Pasajeros por Aerolinea"
          " (primeras 5 aerolineas con más pasajeros) "
          "⛥⛥⛥⛥\n")
    # Imprime el segundo ordenado por suma de pasajeros
    print(df2.sort_values(by='Suma de pasajeros', ascending=False). head(5))

    # Imprime los demás gráficos con los dataFrames de los informes
    analisis.valoresAtipicos('Pasajeros en clase L', df2)
    analisis.cajaBigotes('Número de Viajes', df1)
    analisis.encontrarTendencias(df2)


if __name__ == "__main__":
    # Llamar la main
    main()
