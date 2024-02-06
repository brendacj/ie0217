from obtenciondatos import ObtencionDatos
import matplotlib.pyplot as plt
import pandas as pd

class AnalisisDeDatos():
    def __init__ (self):
        self.datos = ObtencionDatos()
        self.datos.obtencionLimpieza()

    def ValoresDescriptivos(self):
        print(self.datos.aerolineas.describe())

    def identificarTendencias(self, columna):
        ## Para visualizar tendencias (média movil)
        promedioRolling = self.datos.aerolineas[columna].rolling(window=10).mean()
        return(promedioRolling)
        """
        datos.aerolineas['DISTANCE'].plot()
        promedioRolling.plot()
        plt.show()
        """

    def encontrarTendencias(self):
        # Matriz de correlación, se puede visualizar con un heatmap() de seaborn
        # Encontrar patrones
        matriz_correlacion = self.datos.aerolineas.corr()
        """
        plt.figure(figsize=(10, 7))
        sns.heatmap(correlation_matrix, annot=True)
        plt.show()
        """
        return(matriz_correlacion)

    def valoresAtipicos(self, columna):
        # Calcula el rango intercuartil
        Q1 = self.datos.aerolineas[columna].quantile(0.25)
        Q3 = self.datos.aerolineas[columna].quantile(0.75)
        IQR = Q3 - Q1

        # Umbrales para valores atípicos
        umbralInferior = Q1 - 1.5 * IQR
        umbralSuperior = Q3 + 1.5 * IQR

        # Encuentra valores atípicos
        valoresAtipicos = self.datos.aerolineas[(self.datos.aerolineas[columna] < umbralInferior) | (self.datos.aerolineas[columna] > umbralSuperior)]
        return(valoresAtipicos)

    def generadorViajes(self):
        gruposAerolineas = self.datos.aerolineas.groupby('UNIQUE_CARRIER_NAME')

        for aerolinea, filas in gruposAerolineas:
            numViajes = len(filas)
            sumDistancias = filas['DISTANCE'].sum()
            yield aerolinea, numViajes, sumDistancias
    
    def generadorPasajeros(self):
        gruposAerolineas = self.datos.aerolineas.groupby('UNIQUE_CARRIER_NAME')

        for aerolinea, filas in gruposAerolineas:
            #filasCoinciden = df[df['CLASS'] == "F"]
            filasClaseF = filas[filas['CLASS'] == 'F']
            sumaClaseF = filasClaseF['PASSENGERS'].sum()

            filasClaseL = filas[filas['CLASS'] == 'L']
            sumaClaseL = filasClaseL['PASSENGERS'].sum()
            #sumaClaseF = filasCoinciden['PASSENGERS'].tolist()
            sumPasajeros = filas['PASSENGERS'].sum()
            yield aerolinea, sumPasajeros, sumaClaseF, sumaClaseL

    def imprimirInformes(self):
        # Inicializa un DataFrame vacío
        columnas1 = ['Aerolínea', 'Número de Viajes', 'Suma de Distancias']
        df1 = pd.DataFrame(columns=columnas1)
        for aerolinea, numViajes, sumDistancias in self.generadorViajes():
            # Agrega una nueva fila al DataFrame
            df1.loc[len(df1)] = [aerolinea, numViajes, sumDistancias]
        
        columnas2 = ['Aerolínea', 'Suma de pasajeros', 'Pasajeros en clase F', 'Pasajeros en clase L']
        df2 = pd.DataFrame(columns=columnas2)
        for aerolinea, sumPasajeros, sumaClaseF, sumaClaseL in self.generadorPasajeros():
            # Agrega una nueva fila al DataFrame
            df2.loc[len(df2)] = [aerolinea, sumPasajeros, sumaClaseF, sumaClaseL]

        print(df1)
        print(df2)



objeto = AnalisisDeDatos()
objeto.ValoresDescriptivos()
objeto.imprimirInformes()