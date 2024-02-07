"""
Este software está sujeto a los términos y condiciones de la Licencia MIT.
Entre otras cosas se establece que si se utiliza o distribuye partes
sustanciales del programa, se deben incluir el aviso de derechos de autor
y el aviso de permiso en tu distribución.
"""

import pandas as pd


class ObtencionDatos():
    """Clase para obtener y limpiar datos
    de aerolíneas desde un archivo CSV."""

    def __init__(self):
        """Inicializa la clase y define el
        nombre del archivo y el DataFrame."""
        self.archivo = 'aerolineas.csv'
        self.aerolineas = pd.DataFrame()

    def obtencionLimpieza(self):
        try:
            """Obtiene y limpia los datos del archivo CSV."""
            # Leer un archivo separado por comas, se guarda en un dataFrame
            self.aerolineas = pd.read_csv(self.archivo)

            # Eliminar las filas con valores nulos
            self.aerolineas = self.aerolineas.dropna()

            # Eliminar columnas innecesarias
            # Lista de nombres de las columnas a eliminar
            columnasEliminar = ['ORIGIN_AIRPORT_ID',
                                'DEST_AIRPORT_ID', 'MONTH']
            self.aerolineas = self.aerolineas.drop(columnasEliminar, axis=1)

            # Asegurarse de que los tipos de la columnas sean floats
            self.aerolineas[['PASSENGERS', 'DISTANCE']] = self.aerolineas[[
                'PASSENGERS', 'DISTANCE']].astype(float)
        except FileNotFoundError:
            # Manejo de errores en caso de que no encuentre el archivo
            print("El archivo no se encontró. Verifique")
        except Exception as e:
            print(
                # Maneja cualquier otro error
                f"Ocurrió un error inesperado durante la carga de datos: {e}")
