from obtenciondatos import ObtencionDatos
import matplotlib.pyplot as plt
import pandas as pd
class FiltroEspecifico():
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

        while fila_actual['DISTANCE'] <= 3500 or fila_actual['PASSENGERS'] >= 300 :
            if self.indice_actual >= len(self.datos.aerolineas):
                raise StopIteration
            fila_actual = self.datos.aerolineas.iloc[self.indice_actual]
            self.indice_actual += 1

        return fila_actual
            
filtro_aerolinea = FiltroEspecifico()
df_filtrado = pd.DataFrame([fila for fila in filtro_aerolinea], columns=filtro_aerolinea.datos.aerolineas.columns)
print(df_filtrado)