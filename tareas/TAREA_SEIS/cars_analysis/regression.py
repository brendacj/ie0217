"""
Este software está sujeto a los términos y condiciones de la Licencia MIT.
Entre otras cosas se establece que si se utiliza o distribuye partes
sustanciales del programa, se deben incluir el aviso de derechos de autor
y el aviso de permiso en tu distribución.
"""

import numpy as np
import matplotlib.pyplot as plt
from sklearn.linear_model import LinearRegression
from sklearn.model_selection import train_test_split
from sklearn.preprocessing import PolynomialFeatures
from sklearn.metrics import mean_absolute_error, mean_squared_error, r2_score


class Regresiones ():
    """Clase para realizar diferentes tipos de regresiones."""

    def __init__(self, datos):
        """Inicializa la clase.

        Args:
            datos (DataFrame): Los datos sobre los que se
            realizarán las regresiones.
        """
        self.datos = datos

    def regresionLineal(self, XX, yy):
        """Realiza una regresión lineal.

        Args:
            XX (str): La variable independiente.
            yy (str): La variable dependiente.
        """
        X = self.datos[[XX]]
        y = self.datos[yy]

        # Dividir los datos en conjuntos de entrenamiento y prueba
        X_train, X_test, y_train, y_test = train_test_split(
            X, y, test_size=0.2, random_state=42)

        # Ajustar el modelo de regresión lineal
        regression_model = LinearRegression()
        regression_model.fit(X_train, y_train)

        # Predecir los valores de prueba
        y_pred = regression_model.predict(X_test)

        # Llamar método para Medir el rendimiento del modelo
        self.medirRendimiento(y_test, y_pred)

        # Graficar los resultados
        plt.scatter(X_test, y_test, color='blue')
        plt.plot(X_test, y_pred, color='red', linewidth=2)
        plt.xlabel(XX.replace('_', ' '))
        plt.ylabel(yy.replace('_', ' '))
        plt.title('Regresión Lineal: ' + XX.replace('_', ' ') +
                  ' vs. ' + yy.replace('_', ' '))
        plt.show()

    def regresionNoLineal(self, XX, yy, grado=2):
        """Realiza una regresión polinómica.

        Args:
            XX (str): La variable independiente.
            yy (str): La variable dependiente.
            grado (int): El grado del polinomio (predeterminado: 2).
        """
        # Agrupar los datos por la variable independiente y calcular
        # la media de la variable dependiente
        datos = self.datos.groupby(XX)[yy].mean()

        X = datos.index.values.reshape(-1, 1)
        y = datos.values.reshape(-1, 1)

        # Transformar las características para ajustar un modelo polinómico
        polinomico = PolynomialFeatures(grado).fit_transform(X)
        (X_train_nonlinear, X_test_nonlinear,
         y_train_nonlinear, y_test_nonlinear) = (
             train_test_split(polinomico, y, test_size=0.5,
                              random_state=121))

        # Ajustar el modelo de regresión polinómica
        modelo_polinomico = LinearRegression()
        modelo_polinomico.fit(X_train_nonlinear, y_train_nonlinear)

        # Predecir los valores de prueba
        y_pred = modelo_polinomico.predict(X_test_nonlinear)

        # Medir el rendimiento del modelo
        self.medirRendimiento(y_test_nonlinear, y_pred)

        # Graficar los resultados
        plt.scatter(X, y)
        sorted_index = np.argsort(X_test_nonlinear[:, 1])
        plt.plot(X_test_nonlinear[:, 1][sorted_index],
                 y_pred[sorted_index], color='red',
                 label=f'Regresión Polinómica ({grado} grado)')
        plt.title('Regresión no lineal por promedio (Polinomica): ' +
                  XX.replace('_', ' ') + ' vs. ' + yy.replace('_', ' '))
        plt.xlabel(XX.replace('_', ' '))
        plt.ylabel(yy.replace('_', ' '))
        plt.legend()
        plt.show()

    def medirRendimiento(self, y_test, y_pred):
        """Mide el rendimiento del modelo de regresión.

        Args:
            y_test (array): Los valores reales de la variable dependiente.
            y_pred (array): Los valores predichos por el modelo.
        """

        # Calcular métricas de rendimiento
        mae = mean_absolute_error(y_test, y_pred)
        mse = mean_squared_error(y_test, y_pred)
        r2 = r2_score(y_test, y_pred)

        # Imprimir las métricas
        print("Redimiento de la regresión: ")
        print(f'MAE: {mae:.2f}')
        print(f'MSE: {mse:.2f}')
        print(f'R^2: {r2:.2f}')
