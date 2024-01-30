import pandas as pd
# Leer un archivo separado por comas, se guarda en un dataFrame
titanic = pd.read_csv('titanic.csv')

# Reescribir un excel con titanic
titanic.to_excel("titanic.xlsx", sheet_name="passengers", index=False)
# Mostrar los primeros 8 elementos de titanic
print(titanic.head(3))
# Tipos de los elemntos de titanic (Este es un atributo)
print("Tipos de los elementos")
print(titanic.dtypes)
# Leer la hoja del excel llamada "passengers"
titanic = pd.read_excel("titanic.xlsx", sheet_name="passengers")
# Información general de la hoja que se está leyendo
print("Información general")
titanic.info()
#Mostrar las primeras filas y columnas
#titanic = pd.read_csv("data/titanic.csv")
print("Encabezado")
print(titanic.head())
# Crear una serie de las edades y de igual amnera mostrar las primeras filas y columnas
print("Encabezado de la serie edad")
ages = titanic["Age"]
print(ages.head())
# Tipo de la columna Age
print("tipo de edad")
print(type(titanic["Age"]))
# Dimensión de la columna/serie de Age
print("Dimensión de edad")
print(titanic["Age"].shape)

# Crea un dataFrame de las series Age y Sex
print("Dos columnas")
age_sex = titanic[["Age", "Sex"]]
print(age_sex.head())
print(type(titanic[["Age", "Sex"]]))
print(titanic[["Age", "Sex"]].shape)

# Obtener filas con cierta condición que debe ucmplirse
print("Obtener filas")
above_5 = titanic[titanic["Age"]>5]
print(above_5.head())
print(above_5.shape)

# Condición, que las edades sean igual a 7 o 8
print("Edades 7 o 8")
class_23 = titanic[titanic["Age"].isin([7, 8])]
# También se puede hacer así
#class_23 = titanic[(titanic["Pclass"] == 2) | (titanic["Pclass"] == 3)]
print(class_23.head())

# Buscar las edades que son números
print("Edades que son números")
age_no_na = titanic[titanic["Age"].notna()]
print(age_no_na.head())

# Edad mayor a 12, obtener el nombre
print("Sexo de personamas mayores de 12")
adult_names = titanic.loc[titanic["Age"] > 12, "Sex"]
print(adult_names.head())

# Filas del 5 al 10, columnas del 2 al 3
print("Filas del 5 al 10, columnas del 2 al 3")
print(titanic.iloc[5:10, 1:2])

# Cambiar las primeras edades por 20
print("Cambiar las primeras edades por 20")
titanic.iloc[0:3, 0] = 20
print(titanic.head)

# Cambiar el id por el dobre de la edad
print("Cambiar el id por el doble de la edad")
titanic["PassangerId"] = titanic["Age"] * 2
print(titanic.head)

print("Cambiar el id por el id dividido entre la edad")
titanic["PassangerId"] = (
titanic["PassangerId"] / titanic["Age"])
print(titanic.head)

print("Cambiar el nombre de las columnas Age y PassangerId")
titanic_renamed = titanic.rename(
columns={
"Age": "Edad",
"PassangerId": "ID"
}
)
print(titanic_renamed.head)

print("Cambiar el nombre de las columnas a minusculas")
titanic_renamed = titanic_renamed.rename(columns=str.lower)
print(titanic_renamed.head)

print("Promedio de edades")
print(titanic["Age"].mean())

print("Media de edad y ID")
print(titanic[["Age", "PassangerId"]].median())

print("Lista de info")
titanic.agg(
{
"Age": ["min", "max", "median", "skew"],
"PassangerId": ["min", "max", "median", "mean"],
}
)

# De las columnas de sexo y edad se agrupan por sexo y se saca la media
print("Print agrupar edad y sexo por sexo y sacar la media")
print(titanic[["Sex", "Age"]].groupby("Sex").mean())
#También se puede hacer así:
#print(titanic.groupby("Sex")["Age"].mean())

print("Agrupar por sexo y sacar la media de solamente los números")
print(titanic.groupby("Sex").mean(numeric_only=True))

print("Cuantas personas de sexo feminino o masculino hay")
print(titanic["Sex"].value_counts())
#También se puede hacer así:
#print(titanic.groupby("Pclass")["Pclass"].count())

print("Ordenar por edad")
print(titanic.sort_values(by="Age").head())

print("Ordenar por sexo y por edad en orden descendente")
print(titanic.sort_values(by=['Sex', 'Age'], ascending=False).head())

print("Ordenar por indice los sexos femeninos agrupados por edad")
f = titanic[titanic["Sex"] == "f"]
f_subset = f.sort_index().groupby(["Age"]).head(2)
print(f_subset)

print("Sexo como columnas y ID como valores")
print(f_subset.pivot(columns="Sex", values="PassangerId"))

print("Lo mismo pero con la media")
# Se usa pivot_table para poner la media
pivoted = titanic.pivot_table(
values="PassangerId", index="Age", columns="Sex", aggfunc="mean"
)
print(pivoted)

# margins = True
titanic.pivot_table(
values="PassangerId",
index="Age",
columns="Sex",
aggfunc="mean",
margins=True,

)
print("Quitar el pivot con respecto a ID")
not_pivoted = f_subset.melt(id_vars="PassangerId")
print(not_pivoted)

print("Crear dos dataFrames y después concatenarlos")
titanic1 = pd.read_csv('titanic.csv',
parse_dates=True)
titanic1 =titanic1[["Age", "Sex",
"PassangerId"]]
print(titanic1.head())

titanic2 = pd.read_csv('titanic.csv',
parse_dates=True)
titanic2 = titanic2[["Age", "Sex",
"PassangerId"]]
print(titanic2.head())

print("Listas concatenadas")
# uso de concat
titanic_total = pd.concat([titanic1, titanic2], axis=0)
print(titanic_total.head())

print("Ordenar el dataFrame concatenado por edad")
titanic_total = titanic_total.sort_values("Age")
print(titanic_total.head())





