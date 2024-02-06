from obtenciondatos import ObtencionDatos
import matplotlib.pyplot as plt
import pandas as pd
class FiltroEspecifico():
    # Constructor
    def __init__ (self, distancia, pasajeros):
        self.datos = ObtencionDatos()
        self.datos.obtencionLimpieza()
        self.indice_actual = 0
        self.distancia = distancia
        self.pasajeros = pasajeros
    # Método mágico iter
    def __iter__ (self):
        return self
    # Método mágico next
    def __next__(self):
        if self.indice_actual >= len(self.datos.aerolineas):
            raise StopIteration

        fila_actual = self.datos.aerolineas.iloc[self.indice_actual]
        self.indice_actual += 1

        while fila_actual['DISTANCE'] <= self.distancia or fila_actual['PASSENGERS'] >= self.pasajeros :
            if self.indice_actual >= len(self.datos.aerolineas):
                raise StopIteration
            fila_actual = self.datos.aerolineas.iloc[self.indice_actual]
            self.indice_actual += 1

        return fila_actual