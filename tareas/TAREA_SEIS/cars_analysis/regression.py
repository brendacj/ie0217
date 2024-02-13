"""
Este software está sujeto a los términos y condiciones de la Licencia MIT.
Entre otras cosas se establece que si se utiliza o distribuye partes
sustanciales del programa, se deben incluir el aviso de derechos de autor
y el aviso de permiso en tu distribución.
"""

from ObtenerData import ObtencionDatos
import numpy as np
import matplotlib.pyplot as plt
from sklearn.linear_model import LinearRegression
from sklearn.model_selection import train_test_split
from sklearn.pipeline import make_pipeline
from sklearn.preprocessing import PolynomialFeatures
from sklearn.metrics import mean_absolute_error, mean_squared_error, r2_score

class Regresiones ():
    def __init__(self, datos):
        self.datos = datos

    def regresionLineal(self, XX, yy):
        X = self.datos[[XX]]  
        y = self.datos[yy]

        X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.2, random_state=42)

        regression_model = LinearRegression()
        regression_model.fit(X_train, y_train)

        y_pred = regression_model.predict(X_test)

        self.medirRendimiento(y_test, y_pred)

        plt.scatter(X_test, y_test, color='blue')
        plt.plot(X_test, y_pred, color='red', linewidth=2)
        plt.xlabel(XX.replace('_', ' '))
        plt.ylabel(yy.replace('_', ' '))
        plt.title('Regresión Lineal: '+ XX.replace('_', ' ') + ' vs. '+ yy.replace('_', ' '))
        #plt.title('Regresión Lineal: ')
        plt.show()

    def regresionNoLineal(self, XX, yy, grado = 2):
        #X = self.datos[XX].values.reshape(-1, 1)
        #y = self.datos[yy].values

        datos = self.datos.groupby(XX)[yy].mean()

        X = datos.index.values.reshape(-1, 1)
        y = datos.values.reshape(-1, 1)

        #X = self.datos[XX].values.reshape(-1, 1)
        #y = self.datos[yy].values.reshape(-1, 1)

        #modelo_polinomico.fit(X, y)
        #X_train_nonlinear, X_test_nonlinear, y_train_nonlinear, y_test_nonlinear = train_test_split(X, y, test_size=0.2, random_state=42)
        polinomico = PolynomialFeatures(grado).fit_transform(X)
        #modelo_polinomico.fit(X, y)
        X_train_nonlinear, X_test_nonlinear, y_train_nonlinear, y_test_nonlinear = train_test_split(polinomico, y, test_size=0.5, random_state=121)
        
        #modelo_polinomico = make_pipeline(PolynomialFeatures(grado), LinearRegression())
        modelo_polinomico = LinearRegression()
        modelo_polinomico.fit(X_train_nonlinear, y_train_nonlinear)

        #X_test = np.linspace(0, 2, 100).reshape(100, 1)
        y_pred = modelo_polinomico.predict(X_test_nonlinear)
        #y_pred = modelo_polinomico.predict(polinomico)

        self.medirRendimiento(y_test_nonlinear, y_pred)

        plt.scatter(X, y)
        #plt.plot(X, y_pred, color = 'red', label = f'Regresión Polinómica ({grado} grado)')
        sorted_index = np.argsort(X_test_nonlinear[:,1])
        plt.plot(X_test_nonlinear[:,1][sorted_index], y_pred[sorted_index], color = 'red',
               label = f'Regresión Polinómica ({grado} grado)')
        plt.title('Regresión no lineal (Polinomica): '+ XX.replace('_', ' ') + ' vs. '+ yy.replace('_', ' '))
        plt.xlabel(XX.replace('_', ' '))
        plt.ylabel(yy.replace('_', ' '))
        plt.legend()
        plt.show()

    def medirRendimiento(self, y_test, y_pred):
        mae = mean_absolute_error(y_test, y_pred)
        mse = mean_squared_error(y_test, y_pred)
        r2 = r2_score(y_test, y_pred)

        print("Redimiento de la regresión: ")
        print (f'MAE: {mae:.2f}')
        print (f'MSE: {mse:.2f}')
        print (f'R^2: {r2:.2f}')