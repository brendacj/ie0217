from EvaluacionEspecifica import EvaluacionEspecifica
from TiposDeAlergia import TiposDeAlergias
from EvaluacionGeneral import EvaluacionGeneral

"""
evaluacion1 = TiposDeAlergias()
evaluacion1.ingresarNombre()
evaluacion1.ingresarValor()
general1 = EvaluacionGeneral()
general1.calcularPuntuacion(evaluacion1.listaFinal)
if len(evaluacion1.nombreNoEncontrado) != 0:
    print("Los nombres desconocidos de alergias son: ")
    general1.resultadosDesconocidos(evaluacion1.nombreNoEncontrado)

if len(evaluacion1.valorNoEncontrado) != 0:
    print("Los nombres desconocidos de alergias son: ")
    general1.resultadosDesconocidos(evaluacion1.valorNoEncontrado)

evaluacion1 = EvaluacionEspecifica()
num = int(input("Ingrese su puntuación general: "))
listas = evaluacion1.evaluarAlergias(num)
evaluacion1.mostarInfo(listas)
"""
def mostrarMenu():
    print("1. Mostrar lista de alergias padecidas \n"
          "2. Calcular puntuación de alergias \n"
          "3. Agregar una nueva alergia al sistema \n"
          "4. Salir")
    
def menuDos():
    print("a. Ingresar alergias por nombre \n"
          "b. Ingresar alergias por valor \n"
          "c. Ingresar alergias por nombre y valor \n"
          "d. Calcular la puntuación final de alergias")
    
def procesarOpción():
    while True:
        mostrarMenu()
        opc = input("Ingrese una opción: ")
        if opc == "1":
            evaluacion = EvaluacionEspecifica()
            num = int(input("Ingrese su puntuación general: "))
            listas = evaluacion.evaluarAlergias(num)
            evaluacion.mostarInfo(listas)
        elif opc == "2":
            tipo = TiposDeAlergias()
            while True:
                menuDos()
                opc2 = input("Ingrese una opción: ")
                if opc2 == "a":
                    tipo.ingresarNombre()
                elif opc2 == "b":
                    tipo.ingresarValor()
                elif opc2 == "c":
                    tipo.ingresarNombreValor()
                else:
                    general = EvaluacionGeneral()
                    general.calcularPuntuacion(tipo.listaFinal)
                    if len(tipo.nombreNoEncontrado) != 0:
                        print("Los nombres desconocidos de alergias son: ")
                        general.resultadosDesconocidos(tipo.nombreNoEncontrado)

                    if len(tipo.valorNoEncontrado) != 0:
                        print("Los nombres desconocidos de alergias son: ")
                        general.resultadosDesconocidos(tipo.valorNoEncontrado)
                    break
        elif opc == "3":
            evaluacion = EvaluacionEspecifica()
            evaluacion.AgregarAlergia()
        else:
            break






print("--Alergias--")
procesarOpción()


