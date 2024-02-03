# Importar bibliotecas necesarias
import numpy as np
import matplotlib.pyplot as plt
from sklearn.preprocessing import PolynomialFeatures
from sklearn.linear_model import LinearRegression
from sklearn.pipeline import make_pipeline

# Crear los elementos de ejemplo
np.random.seed(42)
# Fórmulas para x y y
X = 2 * np.random.rand(100, 1)
y = 0.5 * X**2 + X + 2 + np.random.rand(100, 1)

# Disperión de los datos no lineales
plt.scatter(X, y)
plt.title('Datos de regresión no lineal')
plt.xlabel('X')
plt.ylabel('y')
plt.show()

## ESTO CREA OTRA IMAGEN PORQUE YA USÉ plt.show ##


# Aplicar una regresión polinomica
grado_polinomio = 2
# Forma de crear la regresión lineal de tipo polinomico
modelo_polinomico = make_pipeline(
    PolynomialFeatures(grado_polinomio), LinearRegression())
# Ajusta con los vectores de x y y
modelo_polinomico.fit(X, y)

# Crea e imprime la regresión polinomica
X_test = np.linspace(0, 2, 100).reshape(100, 1)
y_pred = modelo_polinomico.predict(X_test)

plt.scatter(X, y)
plt.plot(X_test, y_pred, color = 'red',
         label = f'Regresión Polinómica ({grado_polinomio} grado)')
plt.title('Regresión Polinómica')
plt.xlabel('X')
plt.ylabel('y')
plt.legend()
plt.show()