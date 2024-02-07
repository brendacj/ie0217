"""
Este software está sujeto a los términos y condiciones de la Licencia MIT.
Entre otras cosas se establece que si se utiliza o distribuye partes
sustanciales del programa, se deben incluir el aviso de derechos de autor
y el aviso de permiso en tu distribución.
"""
from obtenciondatos import ObtencionDatos
import matplotlib.pyplot as plt
import pandas as pd
import seaborn as sns


class AnalisisDeDatos():
    """Clase para realizar análisis de datos relacionados con aerolíneas."""

    def __init__(self):
        """Inicializa la clase y carga los datos."""
        self.datos = ObtencionDatos()
        self.datos.obtencionLimpieza()  # Método de ObtencionDatos

    def ValoresDescriptivos(self):
        """Imprime los valores descriptivos del DataFrame."""
        print(self.datos.aerolineas.describe())

    def identificarTendencias(self, columna):
        """Identifica las tendencias de una columna y
        las visualiza en un gráfico de líneas."""
        # Calcular la média movil
        promedioRolling = self.datos.aerolineas[columna].rolling(
            window=10).mean()

        # Crear el gráfico de línea con Seaborn
        sns.lineplot(data=self.datos.aerolineas,
                     x=self.datos.aerolineas.index,
                     y=columna, label='Original')
        sns.lineplot(x=promedioRolling.index, y=promedioRolling,
                     color='red', label='Promedio Móvil')
        # Especificaciones del gráfico
        plt.xlabel('Vuelos')
        plt.ylabel(columna)
        plt.title('Comparación de ' + columna + ' y Promedio Móvil')
        plt.legend()
        plt.show()

    def encontrarTendencias(self, dataset):
        """Encuentra tendencias en los datos y
        las visualiza en un gráfico de barras."""
        # Crea un DataFrame con las columnas específicas del dataset
        dfTemp = dataset[['Suma de pasajeros',
                          'Pasajeros en clase F', 'Pasajeros en clase L']]

        # Crea el gráfico de barras con Seaborn
        sns.barplot(data=dfTemp)

        # Especificaciones del gráfico
        plt.title('Promedios de sumas de pasajeros, total y clases')
        plt.xlabel('Sumas de pasajeros')
        plt.ylabel('Promedios de sus valores')

        # Muestra el gráfico
        plt.show()

    def valoresAtipicos(self, columna, data):
        """Identifica y visualiza los valores
        atípicos en la columna especificada."""
        # Método de los cuartiles
        # Calcula el rango intercuartil
        Q1 = data[columna].quantile(0.25)
        Q3 = data[columna].quantile(0.75)
        IQR = Q3 - Q1

        # Umbrales para los valores atípicos
        umbralInferior = Q1 - 1.5 * IQR
        umbralSuperior = Q3 + 1.5 * IQR

        # Encuentra valores atípicos fuera del umbral
        valoresAtipicos = data[(data[columna] < umbralInferior) | (
            data[columna] > umbralSuperior)]

        # Graficar los datos originales y los valores atípicos
        plt.figure(figsize=(10, 6))
        plt.scatter(data.index, data[columna], label='Datos Originales')
        plt.scatter(valoresAtipicos.index,
                    valoresAtipicos[columna],
                    color='red', label='Valores Atípicos')

        # Especificaciones del gráfico
        plt.xlabel('Aerolineas')
        plt.ylabel(columna)
        plt.title('Valores Atípicos en la Columna ' + columna)
        plt.legend()
        plt.show()

    def cajaBigotes(self, columna, data):
        """Visualiza los datos de la columna
        en un gráfico de caja: Valores atípicos"""
        # Crear el gráfico de caja a partir del data y la columna
        plt.boxplot(data[columna])

        # Especificaciones del gráfico
        plt.xlabel('Aerolineas')
        plt.ylabel(columna)
        plt.title('Gráfico de Caja para la Columna ' + columna)

        # Mostrar el gráfico
        plt.show()

    def generadorViajes(self):
        """Genera información sobre el número de viajes por aerolínea."""
        # Agrupar por nombre de la aerolínea
        gruposAerolineas = self.datos.aerolineas.groupby('UNIQUE_CARRIER_NAME')

        for aerolinea, filas in gruposAerolineas:
            numViajes = len(filas)  # Cada fila es un vuelo distinto
            # Suma los valores de las distancias
            sumDistancias = filas['DISTANCE'].sum()
            # Devuelve con yield (generador)
            yield aerolinea, numViajes, sumDistancias

    def generadorPasajeros(self):
        """Genera información sobre el número
        de pasajeros por aerolínea y clase."""
        gruposAerolineas = self.datos.aerolineas.groupby('UNIQUE_CARRIER_NAME')

        for aerolinea, filas in gruposAerolineas:
            # Busca similitudes en cada fila para llenar listas
            filasClaseF = filas[filas['CLASS'] == 'F']
            sumaClaseF = filasClaseF['PASSENGERS'].sum()
            filasClaseL = filas[filas['CLASS'] == 'L']
            sumaClaseL = filasClaseL['PASSENGERS'].sum()
            sumPasajeros = filas['PASSENGERS'].sum()
            # Devuelve las listas con yield
            yield aerolinea, sumPasajeros, sumaClaseF, sumaClaseL

    def imprimirInformes(self):
        """Genera y devuelve informes en forma de DataFrames."""
        # Inicializa DataFrame primer informe vacío solo con columnas
        columnas1 = ['Aerolínea', 'Número de Viajes', 'Suma de Distancias']
        df1 = pd.DataFrame(columns=columnas1)
        # Van agregandole filas al dataFrame con el generador
        for aerolinea, numViajes, sumDistancias in self.generadorViajes():
            # Agrega una nueva fila al DataFrame
            df1.loc[len(df1)] = [aerolinea, numViajes, sumDistancias]

        columnas2 = ['Aerolínea', 'Suma de pasajeros',
                     'Pasajeros en clase F', 'Pasajeros en clase L']
        # Inicializa DataFrame segundo informe vacío solo con columnas
        df2 = pd.DataFrame(columns=columnas2)
        # Van agregandole filas al dataFrame con el generador
        for aerol, sumPasaj, sumF, sumL in self.generadorPasajeros():
            # Agrega una nueva fila al DataFrame
            df2.loc[len(df2)] = [aerol, sumPasaj, sumF, sumL]
        # Devuelve los dataFrame generados
        return (df1, df2)
