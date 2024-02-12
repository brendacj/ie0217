from ObtenerData import ObtencionDatos
import numpy as np
import matplotlib.pyplot as plt
from sklearn.linear_model import LinearRegression
from sklearn.model_selection import train_test_split
from sklearn.pipeline import make_pipeline
from sklearn.preprocessing import PolynomialFeatures
from sklearn.metrics import mean_absolute_error, mean_squared_error, r2_score

class Regresiones ():
    def __init__(self):
        self.datos = ObtencionDatos()
        self.datos.obtencionLimpieza()

    def regresionLineal(self, X, y):
        X = self.datos.dataSet[[X]]  
        y = self.datos.dataSet[y]

        X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.2, random_state=42)

        regression_model = LinearRegression()
        regression_model.fit(X_train, y_train)

        y_pred = regression_model.predict(X_test)

        plt.scatter(X_test, y_test, color='blue')
        plt.plot(X_test, y_pred, color='red', linewidth=2)
        plt.xlabel(X.replace('_', ' '))
        plt.ylabel(y.replace('_', ' '))
        plt.title('Regresión Lineal: '+ X.replace('_', ' ') + ' vs. '+ y.replace('_', ' '))
        plt.show()

    def regresionNoLineal(self, X, y, grado = 2):
        X = self.datos.dataSet[[X]]  
        y = self.datos.dataSet[y]
        modelo_polinomico = make_pipeline(PolynomialFeatures(grado), LinearRegression())
        modelo_polinomico.fit(X, y)

        X_test = np.linspace(0, 2, 100).reshape(100, 1)
        y_pred = modelo_polinomico.predict(X_test)

        plt.scatter(X, y)
        plt.plot(X_test, y_pred, color = 'red',
                label = f'Regresión Polinómica ({grado} grado)')
        plt.title('Regresión no lineal (Polinomica): '+ X.replace('_', ' ') + ' vs. '+ y.replace('_', ' '))
        plt.xlabel(X.replace('_', ' '))
        plt.ylabel(y.replace('_', ' '))
        plt.legend()
        plt.show()

regresion = Regresiones ()
regresion.datos.dataSet = regresion.datos.dataSet.sort_values(by='year')
print(regresion.datos.dataSet.head())
regresion.regresionLineal('year','selling_price')