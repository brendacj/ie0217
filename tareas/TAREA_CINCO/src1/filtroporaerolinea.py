from obtenciondatos import ObtencionDatos
import matplotlib.pyplot as plt
import pandas as pd
class FiltroPorAerolinea():
    # Constructor
    def __init__ (self, columna):
        self.datos = ObtencionDatos()
        self.datos.obtencionLimpieza()
        self.indice_actual = 0
        self.columna = columna
    # Método mágico iter
    def __iter__ (self):
        return self
    # Método mágico next
    def __next__(self):
        if self.indice_actual >= len(self.datos.aerolineas):
            raise StopIteration

        fila_actual = self.datos.aerolineas.iloc[self.indice_actual]
        self.indice_actual += 1

        while fila_actual['UNIQUE_CARRIER_NAME'] != self.columna:
            if self.indice_actual >= len(self.datos.aerolineas):
                raise StopIteration
            fila_actual = self.datos.aerolineas.iloc[self.indice_actual]
            self.indice_actual += 1

        return fila_actual