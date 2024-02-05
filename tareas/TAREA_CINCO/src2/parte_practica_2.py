import pandas as pd
import numpy as np
## Crear una lista, filas y columnas, como un diccionario

"""
df = pd.DataFrame(
{
    "Name": [
    "Brenda", "Henry",
    "Isabela", "Christopher",
    "Genesis", "Kevin",
    ],
    "Matemáticas": [10, 9, 8, 6, 8, 8.5],
    "Español": [9, 8, 10, 7, 8, 9.5],
    "Ciencias": [9, 8, 9.5, 4, 5.5, 7.5],
    "Estudios Sociales": [8, 7, 10, 8, 6, 9],
    "Artes plásticas": [10, 6, 6, 9.5, 6.5, 10],
    
}
)
"""
calificaciones = np.array(
    [
        [10, 9, 8, 6, 8],
        [9, 8, 10, 7, 8],
        [9, 8, 9.5, 4, 5.5],
        [8, 7, 10, 8, 6],
        [10, 6, 6, 9.5, 6.5,]

    ]
)

asignaturas = np.array(
    ["Matemáticas", "Español", "Ciencias", "Estudios Sociales", "Artes plásticas"]
)

nombres = np.array(
    ["Brenda", "Henry",
    "Isabela", "Christopher",
    "Genesis"]
)


"""
def resumenGeneral():
    califPorEstudiante = []
    califPorAsignatura = []
    for index, filas in df.iterrows():
        promedioFila = filas.mean()
        califPorEstudiante.append(promedioFila)

    for columnas in df.columns:
        promedioColumna = columnas.mean()
        califPorAsignatura.append(promedioColumna)

"""
def resumenGeneral():

    promPorEstudiante = np.mean(calificaciones, axis=1)

    maximoPorEstudiante = np.max(calificaciones, axis=1)

    sumatoriaPorAsignatura = np.sum(calificaciones, axis=0)

    promPorAsigantura = np.mean(calificaciones, axis=0)

    return(promPorEstudiante, maximoPorEstudiante, sumatoriaPorAsignatura, promPorAsigantura)


def imprimir(promPorEstudiante, maximoPorEstudiante, sumatoriaPorAsignatura, promPorAsigantura):

    df= pd.DataFrame(calificaciones, columns=asignaturas)
    df.insert(0, 'Estudiante', nombres)
    print("\n### Tabla de datos ###")
    print(df)
    """
    df1= pd.DataFrame([sumatoriaPorAsignatura], columns=asignaturas)
    print("\nSumatoria por asignatura")
    print(df1)
    df2= pd.DataFrame([promPorAsigantura], columns=asignaturas)
    print("\nPromedio por asignatura")
    print(df2)
    """
    df1= pd.DataFrame(sumatoriaPorAsignatura, columns=["Sumatoria"])
    df1.insert(0, 'Asignatura', asignaturas)
    print("\n## Sumatoria por asignatura ##")
    print(df1)

    df2= pd.DataFrame(promPorAsigantura, columns=["Promedio"])
    df2.insert(0, 'Asignatura', asignaturas)
    print("\n## Promedio por asignatura ##")
    print(df2)

    df3= pd.DataFrame(promPorEstudiante, columns=["Promedio"])
    df3.insert(0, 'Estudiante', nombres)
    print("\n## Promedio por estudiante ##")
    print(df3)

    df4= pd.DataFrame(maximoPorEstudiante, columns=["Nota"])
    df4.insert(0, 'Estudiante', nombres)
    print("\n## Nota máxima por estudiante ##")
    print(df4)

def main():
    promPorEstudiante, maximoPorEstudiante, sumatoriaPorAsignatura, promPorAsigantura = resumenGeneral()
    imprimir(promPorEstudiante, maximoPorEstudiante, sumatoriaPorAsignatura, promPorAsigantura)

main()
#resumenGeneral()