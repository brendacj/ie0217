"""
Este software está sujeto a los términos y condiciones de la Licencia MIT.
Entre otras cosas se establece que si se utiliza o distribuye partes
sustanciales del programa, se deben incluir el aviso de derechos de autor
y el aviso de permiso en tu distribución.
"""

from kaggle.api.kaggle_api_extended import KaggleApi
import pandas as pd


class ObtencionDatos():
    """Clase para obtener y limpiar datos
    de los vehículos en un archivo CSV."""

    def __init__(self):
        """Inicializa la clase y define el
        nombre del archivo y el DataFrame."""
        self.archivo = 'CAR DETAILS FROM CAR DEKHO.csv'
        self.dataSet = pd.DataFrame()

    def obtencionLimpieza(self):
        """Obtiene y limpia los datos del archivo CSV."""
        try:
            # Autenticación y descarga de datos desde Kaggle
            api = KaggleApi()

            dataset_name = "akshaydattatraykhare/car-details-dataset"

            api.authenticate()

            api.dataset_download_files(dataset_name, path='./', unzip=True)

            """Obtiene y limpia los datos del archivo CSV."""

            # Leer un archivo separado por comas, se guarda en un dataFrame
            self.dataSet = pd.read_csv(self.archivo)

            # Eliminar las filas con valores nulos
            self.dataSet = self.dataSet.dropna()

            # Asegurarse de que los tipos de la columnas sean str
            self.dataSet[['name', 'fuel', 'seller_type']] = self.dataSet[[
                'name', 'fuel', 'seller_type']].astype(str)

            # Asegurarse de que los tipos de la columnas sean float
            self.dataSet[['year', 'selling_price', 'km_driven'
                          ]] = self.dataSet[['year', 'selling_price',
                                             'km_driven']].astype(float)

        except FileNotFoundError:
            # Manejo de errores en caso de que no encuentre el archivo
            print("El archivo no se encontró. Verifique")
        except Exception as e:
            print(
                # Maneja cualquier otro error
                f"Ocurrió un error inesperado durante la carga de datos: {e}")

        return self.dataSet  # Retorna el dataSet
