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
    analisis.encontrarTendencias()

    df1, df2 = analisis.imprimirInformes()
    print("\n⛥⛥⛥⛥"
          " Informe de Viajes por Aerolinea"
          " (Número de viajes y distancias totales recorridas) "
          "⛥⛥⛥⛥\n")
    print(df1)

    print("\n⛥⛥⛥⛥"
          " Informe de Pasajeros por Aerolinea"
          " (Pasajerso totales y según clase) "
          "⛥⛥⛥⛥\n")
    print(df2)

    analisis.valoresAtipicos('Suma de pasajeros', df2)
    analisis.cajaBigotes('Suma de Distancias', df1)

if __name__ == "__main__":
    main()