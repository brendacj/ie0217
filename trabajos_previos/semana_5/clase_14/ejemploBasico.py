import pandas as pd
## Crear una lista, filas y columnas, como un diccionario
df = pd.DataFrame(
{
    "Name": [
    "Braund, Mr. Owen Harris",
    "Allen, Mr. William Henry",
    "Bonnell, Miss. Elizabeth",
    ],
    "Age": [22, 35, 58],
    "Sex": ["male", "male", "female"],
}
)
# Imprimir el dataFrame
print(df)
# Hacer una serie de edades
ages = pd.Series([22, 35, 58], name="Age")
# Imprimir la edad máxima
print(ages.max())

# Imprimir la columna de edades, tiene etiquetas de fila, no de columna
print(df["Age"])

# Realiza un tipo de analisis o resumen de los datos numericos, no es necesario
# especificar que debe ignorar los no númericos (Formato de serie)
print(df.describe()) # Es una serie
