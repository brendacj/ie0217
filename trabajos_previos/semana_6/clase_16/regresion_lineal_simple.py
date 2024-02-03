# Importar las bibliotecas necesarias
import numpy as np
import matplotlib.pyplot as plt
from sklearn.linear_model import LinearRegression

# Valores de ejemplo

# Fuente que utiliza numpy para generar los valores aletorios
np.random.seed(42)
# Formulas (Y dependiendo de X)
x = 2 * np.random.rand(100, 1)
y = 4 + 3 * x + np.random.rand(100, 1)

# Crear modelo (LLama una función)
modelo = LinearRegression()

# Lo ajusta a los valores creados antes
modelo.fit(x, y)

# Imprime el coeficiente e intercepto de la ecuación
# lineal con los métodos
print("Coeficiente:", modelo.coef_[0][0])
print("Interception:", modelo.intercept_[0])

# Se muestra el gráfico de la regresión
plt.scatter(x, y)  # Dispersión
# Lineal
plt.plot(x, modelo.predict(x), color = 'red', linewidth=3)
plt.title('Regresión lineal')
plt.xlabel("X")
plt.ylabel("Y")
plt.show()