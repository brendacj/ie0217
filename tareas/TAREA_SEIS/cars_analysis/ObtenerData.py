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
    de aerolíneas desde un archivo CSV."""

    def __init__(self):
        """Inicializa la clase y define el
        nombre del archivo y el DataFrame."""
        self.archivo = 'CAR DETAILS FROM CAR DEKHO.csv'
        self.dataSet = pd.DataFrame()

    def obtencionLimpieza(self):
        try:
            api = KaggleApi()

            dataset_name = "akshaydattatraykhare/car-details-dataset"

            api.authenticate()

            api.dataset_download_files(dataset_name, path='./', unzip=True)

            """Obtiene y limpia los datos del archivo CSV."""
            # Leer un archivo separado por comas, se guarda en un dataFrame
            self.dataSet = pd.read_csv(self.archivo)

            # Eliminar las filas con valores nulos
            self.dataSet = self.dataSet.dropna()

            # Eliminar columnas innecesarias
            # Lista de nombres de las columnas a eliminar
            #columnasEliminar = ['ORIGIN_AIRPORT_ID',
            #                    'DEST_AIRPORT_ID', 'MONTH']
            #self.aerolineas = self.aerolineas.drop(columnasEliminar, axis=1)

            # Asegurarse de que los tipos de la columnas sean str
            self.dataSet[['name','fuel','seller_type','transmission','owner']] = self.dataSet[[
                'name','fuel','seller_type','transmission','owner']].astype(str)
            
            # Asegurarse de que los tipos de la columnas sean float
            self.dataSet[['year','selling_price','km_driven']] = self.dataSet[[
                'year','selling_price','km_driven']].astype(float)
            
            self.eliminar_atipicos('selling_price')
            self.eliminar_atipicos('km_driven')
            
        except FileNotFoundError:
            # Manejo de errores en caso de que no encuentre el archivo
            print("El archivo no se encontró. Verifique")
        except Exception as e:
            print(
                # Maneja cualquier otro error
                f"Ocurrió un error inesperado durante la carga de datos: {e}")
            
        return self.dataSet
    

    def eliminar_atipicos(self, column_name, threshold=3):
        # Calcular la media y la desviación estándar de la columna
        mean = self.dataSet[column_name].mean()
        std_dev = self.dataSet[column_name].std()

        # Definir el criterio para identificar valores atípicos
        lower_bound = mean - threshold * std_dev
        upper_bound = mean + threshold * std_dev

        # Filtrar el DataFrame para eliminar valores atípicos
        self.dataSet = self.dataSet[(self.dataSet[column_name] > lower_bound) & (self.dataSet[column_name] < upper_bound)]