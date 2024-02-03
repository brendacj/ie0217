# Importar bibliotecas necesarias
import numpy as np
import matplotlib.pyplot as plt
from sklearn.model_selection import train_test_split
from sklearn.preprocessing import PolynomialFeatures
from sklearn.linear_model import LinearRegression, Lasso, Ridge
from sklearn.pipeline import make_pipeline

# Crear los elementos de ejemplo
np.random.seed(42)
# Fórmulas para x y y
X = 2 * np.random.rand(100, 1)
y = 0.5 * X**2 + X + 2 + np.random.rand(100, 1)

# Dividir los datos en 4 vectores para entrenamiento y prueba
X_train, X_test, y_train, y_test = \
    train_test_split(X, y, test_size=0.2, random_state=42)


# Aplicar una regresión polinomica
grado_polinomio = 2
# Forma de crear la regresión lineal de tipo polinomico (Sin nada)
modelo_polinomico = make_pipeline(
    PolynomialFeatures(grado_polinomio), LinearRegression())
# Ajusta con los vectores de x y y
modelo_polinomico.fit(X, y)

# Crear el modelo tipo Lasso, grado dos y coeficiente 0.1
modelo_lasso = make_pipeline(PolynomialFeatures(degree=2), Lasso(alpha=0.1))
# Ajustar
modelo_lasso.fit(X_train, y_train)

# Crear el modelo tipo Lasso, grado dos y coeficiente 0.1
modelo_ridge = make_pipeline(PolynomialFeatures(degree=2), Ridge(alpha=0.1))
# Ajustar
modelo_ridge.fit(X_train, y_train)

# Visualizar los resultados
X_test_sorted, y_pred_polinomico_sorted = \
    zip(*sorted(zip(X_test, modelo_polinomico.predict(X_test))))
X_test_sorted, y_pred_lasso_sorted = \
    zip(*sorted(zip(X_test, modelo_lasso.predict(X_test))))
X_test_sorted, y_pred_ridge_sorted = \
    zip(*sorted(zip(X_test, modelo_ridge.predict(X_test))))

# Imprimir las tres lineas con leyenda
plt.scatter(X_test, y_test, label='Datos de prueba', color='blue')
plt.plot(X_test_sorted, y_pred_polinomico_sorted, label='Regresión Polinomica',
        color='green')
plt.plot(X_test_sorted, y_pred_lasso_sorted, label='Lasso (L1)', color='red')
plt.plot(X_test_sorted, y_pred_ridge_sorted, label='Ridge (L2)',
        color='orange')
plt.title( 'Comparación de Modelos con Regularización')
plt.xlabel('X')
plt.ylabel('y')
plt.legend()
plt.show()


