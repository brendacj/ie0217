from EvaluacionEspecifica import EvaluacionEspecifica

from TiposDeAlergia import TiposDeAlergias
from EvaluacionGeneral import EvaluacionGeneral


evaluacion1 = TiposDeAlergias()
evaluacion1.ingresarNombre()
#evaluacion1.ingresarValor()
general1 = EvaluacionGeneral()
general1.calcularPuntuacion(evaluacion1.listaFinal)
if len(evaluacion1.nombreNoEncontrado) != 0:
    print("Los nombres desconocidos de alergias son: ")
    general1.resultadosDesconocidos(evaluacion1.nombreNoEncontrado)

if len(evaluacion1.valorNoEncontrado) != 0:
    print("Los nombres desconocidos de alergias son: ")
    general1.resultadosDesconocidos(evaluacion1.valorNoEncontrado)

"""
evaluacion1 = EvaluacionEspecifica()
num = int(input("Ingrese su puntuación general: "))
listas = evaluacion1.evaluarAlergias(num)
evaluacion1.mostarInfo(listas)
"""