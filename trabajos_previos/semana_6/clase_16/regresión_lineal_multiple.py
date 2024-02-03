# Importar las bibliotecas necesarias
import pandas as pd
import matplotlib.pyplot as plt
from sklearn.model_selection import train_test_split
from sklearn.linear_model import LinearRegression
from sklearn.datasets import make_regression

# Se usa un método para crear vectores de ejemplos
# 100 muestras, 3 caracteristicas, ruido 20, semilla 42
X, y = make_regression(n_samples=100, n_features=3, noise=20, random_state=42)

# Crea un dataFrame y especifica las columnas
df = pd.DataFrame(X, columns=['Tamaño', 'Habitaciones', 'Distancia_Ciudad'])
# Crea otra aparte
df['Precio'] = y


# Se dividen entre valores de entrenamiento y valores para porbar el modelo
# Crea 4 vectores con las columnas especificas y semilla definida
X_train, X_test, y_train, y_test = train_test_split(
df[['Tamaño', 'Habitaciones', 'Distancia_Ciudad']],
df['Precio'], test_size=0.2, random_state=42)

# Crear el modelo
modelo = LinearRegression()
# Ajustar el modelo para los vectores de entreno
modelo. fit(X_train, y_train)

# Saca el intercepto y los coeficientes con los métodos y lso imprime
print("Coeficientes:", modelo.coef_)
print ('Intercepcion:', modelo.intercept_)

# Realizar predicciones sobre la prueba
y_pred = modelo.predict(X_test)


# Establecer una figura para los gráficos
fig = plt.figure(figsize=(12, 6))

# Subgráfica 1: 1 fila, 3 columnas, gráfica 1, proyección en 3d
ax1 = fig.add_subplot(131, projection='3d')
# Disperción con especificaciones
ax1.scatter(
  X_test['Tamaño'], X_test['Habitaciones'],
  y_test, c='blue', marker='o', alpha=0.5)
# Etiquetas y titulo
ax1.set_xlabel('Tamaño')
ax1.set_ylabel('Habitaciones')
ax1.set_zlabel('Precio Verdadero')
ax1.set_title('Precio Verdadero vs. Tamaño y Habitaciones')

# Subgráfica 2: 1 fila, 3 columnas, gráfica 2, proyección en 3d
ax2 = fig.add_subplot(132, projection='3d')
# Disperción con especificaciones
ax2.scatter(
  X_test['Tamaño'], X_test['Habitaciones'],
  y_test, c='red', marker='o', alpha=0.5)
# Etiquetas y titulo
ax2.set_xlabel('Tamaño')
ax2.set_ylabel('Habitaciones')
ax2.set_zlabel('Precio Predicho')
ax2.set_title('Precio Predicho vs. Tamaño y Habitaciones')

# Subgráfica 3: 1 fila, 3 columnas, gráfica 3
ax3 = fig.add_subplot(133)
# Disperción con especificaciones
ax3.scatter(y_test, y_pred, c='green', alpha=0.5)
# Linea
ax3.plot(
[min(y_test), max(y_test)], [min(y_test), max(y_test)],
linestyle='--', color='red', linewidth=2)
# Etiquetas y titulo
ax3.set_xlabel('Precio Verdadero')
ax3.set_ylabel('Precio Predicho')
ax3.set_title('Precio Verdadero vs. Precio Predicho')

# Mostrar
plt.tight_layout()
plt.show()







