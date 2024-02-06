from obtenciondatos import ObtencionDatos
import matplotlib.pyplot as plt
import pandas as pd
import seaborn as sns

class AnalisisDeDatos():
    def __init__ (self):
        self.datos = ObtencionDatos()
        self.datos.obtencionLimpieza()

    def ValoresDescriptivos(self):
        print(self.datos.aerolineas.describe())

    def identificarTendencias(self, columna):
        ## Para visualizar tendencias (média movil)
        promedioRolling = self.datos.aerolineas[columna].rolling(window=10).mean()

        # Crear el gráfico de línea con Seaborn
        sns.lineplot(data=self.datos.aerolineas, x=self.datos.aerolineas.index, y=columna, label='Original')
        sns.lineplot(x=promedioRolling.index, y=promedioRolling, color='red', label='Promedio Móvil')
        plt.xlabel('Índice')
        plt.ylabel(columna)
        plt.title('Comparación de ' + columna + ' con Promedio Móvil')
        plt.legend()
        plt.show()

    def encontrarTendencias(self):
        # Matriz de correlación, se puede visualizar con un heatmap() de seaborn
        # Encontrar patrones
        matriz_correlacion = self.datos.aerolineas[['DISTANCE', 'PASSENGERS']].corr()
        sns.heatmap(matriz_correlacion, annot=True, cmap='coolwarm', fmt=".2f")
        plt.title('Mapa de Calor de la Matriz de Correlación')
        plt.show()

    def valoresAtipicos(self, columna, data):
        # Calcula el rango intercuartil
        #self.datos.aerolineas = self.datos.aerolineas.sort_values(by='DISTANCE')
        Q1 = data[columna].quantile(0.25)
        Q3 = data[columna].quantile(0.75)
        IQR = Q3 - Q1

        # Umbrales para valores atípicos
        umbralInferior = Q1 - 1.5 * IQR
        umbralSuperior = Q3 + 1.5 * IQR

        # Encuentra valores atípicos
        valoresAtipicos = data[(data[columna] < umbralInferior) | (data[columna] > umbralSuperior)]
        
    
        # Graficar los datos originales y los valores atípicos
        plt.figure(figsize=(10, 6))
        plt.scatter(data.index, data[columna], label='Datos Originales')
        plt.scatter(valoresAtipicos.index, valoresAtipicos[columna], color='red', label='Valores Atípicos')
        plt.xlabel('Índice')
        plt.ylabel(columna)
        plt.title('Valores Atípicos en la Columna ' + columna)
        plt.legend()
        plt.show()

    def cajaBigotes(self, columna, data):
        # Crear el gráfico de caja
        plt.boxplot(data[columna])

        # Agregar etiquetas y título
        plt.xlabel(columna)
        plt.ylabel('Valores')
        plt.title('Gráfico de Caja para la Columna ' + columna)

        # Mostrar el gráfico
        plt.show()
    

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

        valor_maximo = df1['Suma de Distancias'].max()
        print(valor_maximo)
        
        columnas2 = ['Aerolínea', 'Suma de pasajeros', 'Pasajeros en clase F', 'Pasajeros en clase L']
        df2 = pd.DataFrame(columns=columnas2)
        for aerolinea, sumPasajeros, sumaClaseF, sumaClaseL in self.generadorPasajeros():
            # Agrega una nueva fila al DataFrame
            df2.loc[len(df2)] = [aerolinea, sumPasajeros, sumaClaseF, sumaClaseL]
        
        #self.valoresAtipicos('Suma de pasajeros', df2)
        #self.cajaBigotes('Suma de Distancias', df1)

        return(df1, df2)
