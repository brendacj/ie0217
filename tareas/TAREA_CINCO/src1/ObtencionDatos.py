import pandas as pd



class ObtencionDatos():
    
    def __init__ (self):
        self.archivo = 'aerolineas.csv'
        self.aerolineas = pd.DataFrame()
    
    def obtencionLimpieza(self):
        try:
            # Leer un archivo separado por comas, se guarda en un dataFrame
            self.aerolineas = pd.read_csv(self.archivo)
            # Eliminar las filas con valores nulos
            self.aerolineas = self.aerolineas.dropna()
            # Eliminar columnas innecesarias
            columnasEliminar = ['ORIGIN_AIRPORT_ID', 'DEST_AIRPORT_ID', 'MONTH']  # Lista de nombres de las columnas a eliminar
            self.aerolineas = self.aerolineas.drop(columnasEliminar, axis=1)

            # Asegurarse de que los tipos de la columnas de distancias sean floats
            self.aerolineas[['PASSENGERS', 'DISTANCE']] = self.aerolineas[['PASSENGERS', 'DISTANCE']].astype(float)
        except FileNotFoundError:
            print("El archivo no se encontró. Verifique")
        except Exception as e:
            print(f"Se produjo un error inesperado durante la carga de datos: {e}")