"""
Este software está sujeto a los términos y condiciones de la Licencia MIT.
Entre otras cosas se establece que si se utiliza o distribuye partes
sustanciales del programa, se deben incluir el aviso de derechos de autor
y el aviso de permiso en tu distribución.
"""

from obtenciondatos import ObtencionDatos


class FiltroPorAerolinea():
    """
    Clase para filtrar filas por aerolínea en un DataFrame.
    """

    def __init__(self, columna):
        """
        Constructor de la clase.

        Args:
            columna (str): El nombre de la columna que
            se utilizará para filtrar las filas.
        """
        self.datos = ObtencionDatos()
        self.datos.obtencionLimpieza()
        self.indice_actual = 0
        self.columna = columna

    def __iter__(self):
        """
        Método mágico para iterar sobre la clase.

        Returns:
            FiltroPorAerolinea: El objeto iterador.
        """
        return self

    def __next__(self):
        """
        Método mágico para obtener el próximo elemento.

        Returns:
            pandas.DataFrame: La próxima fila que coincide
            con la aerolínea especificada.

        Raises:
            StopIteration: Cuando no hay más filas que coincidan
            con la aerolínea especificada.
        """
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
