from filtroporaerolinea import FiltroPorAerolinea
from filtroespecifico import FiltroEspecifico
from analisisdedatos import AnalisisDeDatos
import pandas as pd

def main():
    # Filtros

    filtroAero = FiltroPorAerolinea('ADVANCED AIR, LLC')
    print("\n⛥⛥⛥⛥"
          " ENCABEZADO DE TABLA ORIGINAL "
          "⛥⛥⛥⛥\n")
    print(filtroAero.datos.aerolineas.head(10))

    df_filtrado = pd.DataFrame([fila for fila in filtroAero], columns=filtroAero.datos.aerolineas.columns)
    print("\n⛥⛥⛥⛥"
          " TABLA FILTRADA POR AEROLINEA"
          " (ADVANCED AIR, LLC)"
          "⛥⛥⛥⛥\n")
    print(df_filtrado)

    filtroEs = FiltroEspecifico(3500, 300)
    df_filtradoEs = pd.DataFrame([fila for fila in filtroEs], columns=filtroEs.datos.aerolineas.columns)
    print("\n⛥⛥⛥⛥"
          " TABLA FILTRADA POR DISTANCIA Y PASAJEROS"
          " (Distancia mayor a 3000 millas y menos de 300 pasajeros)"
          "⛥⛥⛥⛥\n")
    print(df_filtradoEs)

    # Análisis

    analisis = AnalisisDeDatos()
    print("\n⛥⛥⛥⛥"
          " Resumen de valores descriptivos"
          " (Tabla Original) "
          "⛥⛥⛥⛥\n")
    analisis.ValoresDescriptivos()
    analisis.identificarTendencias('DISTANCE')

    df1, df2 = analisis.imprimirInformes()
    print("\n⛥⛥⛥⛥"
          " Informe de Viajes por Aerolinea"
          " (Número de viajes y distancias totales recorridas) "
          "⛥⛥⛥⛥\n")
    print(df1)

    print("\n⛥⛥⛥⛥"
          " Informe de Viajes por Aerolinea"
          " (5 primera aerolíneas con más vuelos) "
          "⛥⛥⛥⛥\n")
    print(df1.sort_values(by='Número de Viajes', ascending=False). head(5))

    print("\n⛥⛥⛥⛥"
          " Informe de Pasajeros por Aerolinea"
          " (Pasajerso totales y según clase) "
          "⛥⛥⛥⛥\n")
    print(df2)

    print("\n⛥⛥⛥⛥"
          " Informe de Pasajeros por Aerolinea"
          " (primeras 5 aerolineas con más pasajeros) "
          "⛥⛥⛥⛥\n")
    print(df2.sort_values(by='Suma de pasajeros', ascending=False). head(5))

    analisis.valoresAtipicos('Pasajeros en clase L', df2)
    analisis.cajaBigotes('Número de Viajes', df1)
    analisis.encontrarTendencias(df2)

if __name__ == "__main__":
    main()