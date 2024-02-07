"""
Este software está sujeto a los términos y condiciones de la Licencia MIT.
Entre otras cosas se establece que si se utiliza o distribuye partes
sustanciales del programa, se deben incluir el aviso de derechos de autor
y el aviso de permiso en tu distribución.
"""

from obtenciondatos import ObtencionDatos


class FiltroEspecifico():
    """
    Clase para filtrar filas por valores especiifcos en un DataFrame.
    """

    def __init__(self, distancia, pasajeros):
        """
        Constructor de la clase.

        Args:
            distancia (float): Distancia limite para comparación
            pasajeros (float): Número de pasajeros límite para comparación
        """
        self.datos = ObtencionDatos()
        self.datos.obtencionLimpieza()
        self.indice_actual = 0
        self.distancia = distancia
        self.pasajeros = pasajeros

    def __iter__(self):
        """
        Método mágico para iterar sobre la clase.

        Returns:
            FiltroEspecifico: El objeto iterador.
        """
        return self

    def __next__(self):
        """
        Método mágico para obtener el próximo elemento.

        Returns:
            pandas.DataFrame: La próxima fila que coincide
            con las especificaciones.

        Raises:
            StopIteration: Cuando no hay más filas que coincidan
            con la aerolínea especificada.
        """
        if self.indice_actual >= len(self.datos.aerolineas):
            raise StopIteration

        fila_actual = self.datos.aerolineas.iloc[self.indice_actual]
        self.indice_actual += 1

        while (fila_actual['DISTANCE'] <= self.distancia or
               fila_actual['PASSENGERS'] >= self.pasajeros):
            if self.indice_actual >= len(self.datos.aerolineas):
                raise StopIteration
            fila_actual = self.datos.aerolineas.iloc[self.indice_actual]
            self.indice_actual += 1

        return fila_actual
