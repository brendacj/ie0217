from EvaluacionEspecifica import EvaluacionEspecifica
from TiposDeAlergia import TiposDeAlergias
from EvaluacionGeneral import EvaluacionGeneral
import timeit
import cProfile

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
    
def VerificarOpcion1(mensajeusuario,mensajeerror ="No es una opción válida"):
        valor_legal=False
        while valor_legal==False:
            try:
                valorusuario = input(mensajeusuario)
                if valorusuario == "1" or valorusuario ==  "2" or valorusuario == "3" or valorusuario ==  "4":
                    valor_legal = True
                else:
                    print(mensajeerror)
            except:
                print(mensajeerror)
        return(valorusuario)
    

def VerificarOpcion2(mensajeusuario,mensajeerror ="No es una opción válida"):
        valor_legal=False
        while valor_legal==False:
            try:
                valorusuario = input(mensajeusuario).lower()
                if valorusuario == "a" or valorusuario ==  "b" or valorusuario == "c" or valorusuario ==  "d":
                    valor_legal = True
                else:
                    print(mensajeerror)
            except:
                print(mensajeerror)
        return(valorusuario)

def VerificarInt(mensajeusuario,mensajeerror ="No es un número válido, verifique"):
        valor_legal=False
        while valor_legal==False:
            try:
                valorusuario = int((input(mensajeusuario)))
                valor_legal=True
            except:
                print(mensajeerror)
        return(valorusuario)
    
def procesarOpcion():
    while True:
        mostrarMenu()
        opc = VerificarOpcion1("Ingrese una opción: ")
        if opc == "1":
            evaluacion = EvaluacionEspecifica()
            num = VerificarInt("Ingrese su puntuación general: ")
            listas = evaluacion.evaluarAlergias(num)
            evaluacion.mostarInfo(listas)
        elif opc == "2":
            tipo = TiposDeAlergias()
            while True:
                menuDos()
                opc2 = VerificarOpcion2("Ingrese una opción: ")
                if opc2 == "a":
                    tipo.ingresarNombre()
                elif opc2 == "b":
                    tipo.ingresarValor()
                elif opc2 == "c":
                    tipo.ingresarNombreValor()
                else:
                    general = EvaluacionGeneral()
                    general.calcularPuntuacion(tipo.listaFinal)
                    total = len(tipo.listaFinal) + len(tipo.nombreNoEncontrado) + len(tipo.valorNoEncontrado)
                    general.calcularPromedio(total, len(tipo.listaFinal))
                    if len(tipo.nombreNoEncontrado) != 0:
                        print("\nLos nombres desconocidos de alergias son: ")
                        general.resultadosDesconocidos(tipo.nombreNoEncontrado)

                    if len(tipo.valorNoEncontrado) != 0:
                        print("\nLos nombres desconocidos de alergias son: ")
                        general.resultadosDesconocidos(tipo.valorNoEncontrado)
                    break
        elif opc == "3":
            evaluacion = EvaluacionEspecifica()
            evaluacion.AgregarAlergia()
        else:
            break

print("--Alergias--")
procesarOpcion()

tiempo_ejecucion = timeit.timeit(procesarOpcion, number=1) 
print(f'Tiempo de ejecución: {tiempo_ejecucion} segundos')



