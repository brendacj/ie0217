import pandas as pd
try:
    # Leer un archivo separado por comas, se guarda en un dataFrame
    aerolineas = pd.read_csv('aerolineas.csv')
    # Eliminar las filas con valores nulos
    aerolineas = aerolineas.dropna()
    # Asegurarse de que los tipos de las columnas relacionadas con los id o meses sean enteros
    aerolineas[['ORIGIN_AIRPORT_ID', 'DEST_AIRPORT_ID', 'MONTH']] = aerolineas[['ORIGIN_AIRPORT_ID', 'DEST_AIRPORT_ID', 'MONTH']].astype(int)
    # Asegurarse de que los tipos de la columnas de distancias sean floats
    aerolineas[['PASSENGERS', 'DISTANCE']] = aerolineas[['PASSENGERS', 'DISTANCE']].astype(float)
except FileNotFoundError:
    print("El archivo no se encontró. Verifique")
except Exception as e:
    print(f"Se produjo un error inesperado durante la carga de datos: {e}")


# Mostrar los de aerolineas
print(aerolineas.head())