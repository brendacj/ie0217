"""
Este software está sujeto a los términos y condiciones de la Licencia MIT.
Entre otras cosas se establece que si se utiliza o distribuye partes
sustanciales del programa, se deben incluir el aviso de derechos de autor
y el aviso de permiso en tu distribución.
"""

import pandas as pd
import numpy as np

"""
Definición de los arreglos de tipo numpy para las operaciones
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
    ["Matemáticas", "Español", "Ciencias",
     "Estudios Sociales", "Artes plásticas"]
)

nombres = np.array(
    ["Brenda", "Henry",
     "Isabela", "Christopher",
     "Genesis"]
)


def resumenGeneral():
    """
    Calcula resumen general de calificaciones.

    Calcula el promedio y la nota máxima por estudiante, la sumatoria
    de calificaciones por asignatura y el promedio por asignatura.

    Returns:
    -------
    tuple: Una tupla que contiene el promedio por estudiante,
    la nota máxima por estudiante, la sumatoria por
    asignatura y el promedio por asignatura.
    """

    promPorEstudiante = np.mean(calificaciones, axis=1)

    maximoPorEstudiante = np.max(calificaciones, axis=1)

    sumatoriaPorAsignatura = np.sum(calificaciones, axis=0)

    promPorAsigantura = np.mean(calificaciones, axis=0)

    return (promPorEstudiante, maximoPorEstudiante,
            sumatoriaPorAsignatura, promPorAsigantura)


def imprimir(promPorEstudiante, maximoPorEstudiante,
             sumatoriaPorAsignatura, promPorAsigantura):
    """
    Imprime resumen de calificaciones.

    Imprime la tabla de calificaciones, la sumatoria por asignatura,
    el promedio por asignatura, el promedio por estudiante y la nota
    máxima por estudiante.

    Parameters:
    ----------
    promPorEstudiante : array
        Promedio por estudiante.
    maximoPorEstudiante : array
        Nota máxima por estudiante.
    sumatoriaPorAsignatura : array
        Sumatoria por asignatura.
    promPorAsigantura : array
        Promedio por asignatura.
    """

    df = pd.DataFrame(calificaciones, columns=asignaturas)
    df.insert(0, 'Estudiante', nombres)
    print("\n### Tabla de datos ###")
    print(df)

    df1 = pd.DataFrame(sumatoriaPorAsignatura, columns=["Sumatoria"])
    df1.insert(0, 'Asignatura', asignaturas)
    print("\n## Sumatoria por asignatura ##")
    print(df1)

    df2 = pd.DataFrame(promPorAsigantura, columns=["Promedio"])
    df2.insert(0, 'Asignatura', asignaturas)
    print("\n## Promedio por asignatura ##")
    print(df2)

    df3 = pd.DataFrame(promPorEstudiante, columns=["Promedio"])
    df3.insert(0, 'Estudiante', nombres)
    print("\n## Promedio por estudiante ##")
    print(df3)

    df4 = pd.DataFrame(maximoPorEstudiante, columns=["Nota"])
    df4.insert(0, 'Estudiante', nombres)
    print("\n## Nota máxima por estudiante ##")
    print(df4)


def main():
    """
    Función principal.

    Ejecuta el análisis de calificaciones e imprime el resumen.
    """
    promPorEstudiante, maximoPorEstudiante, sumatoriaPorAsignatura, \
        promPorAsigantura = resumenGeneral()
    imprimir(promPorEstudiante, maximoPorEstudiante,
             sumatoriaPorAsignatura, promPorAsigantura)


if __name__ == "__main__":
    # Llamar la main
    main()
