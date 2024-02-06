from obtenciondatos import ObtencionDatos
import matplotlib.pyplot as plt
import pandas as pd
class FiltroPorAerolinea():
    # Constructor
    def __init__ (self):
        self.datos = ObtencionDatos()
        self.datos.obtencionLimpieza()
        self.indice_actual = 0
    # Método mágico iter
    def __iter__ (self):
        return self
    # Método mágico next
    def __next__(self):
        if self.indice_actual >= len(self.datos.aerolineas):
            raise StopIteration

        fila_actual = self.datos.aerolineas.iloc[self.indice_actual]
        self.indice_actual += 1

        while fila_actual['UNIQUE_CARRIER_NAME'] != 'ADVANCED AIR, LLC':
            if self.indice_actual >= len(self.datos.aerolineas):
                raise StopIteration
            fila_actual = self.datos.aerolineas.iloc[self.indice_actual]
            self.indice_actual += 1

        return fila_actual
            
filtro_aerolinea = FiltroPorAerolinea()
df_filtrado = pd.DataFrame([fila for fila in filtro_aerolinea], columns=filtro_aerolinea.datos.aerolineas.columns)
print(df_filtrado)