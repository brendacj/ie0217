from EvaluacionEspecifica import EvaluacionEspecifica
from TiposDeAlergia import TiposDeAlergias
from EvaluacionGeneral import EvaluacionGeneral
# import timeit
# import cProfile


def mostrarMenu():
    """
    Muestra el menú principal con las opciones disponibles.
    """
    print("--Alergias--")
    print("1. Mostrar lista de alergias padecidas \n"
          "2. Calcular puntuación de alergias \n"
          "3. Agregar una nueva alergia al sistema \n"
          "4. Salir")


def menuDos():
    """
    Muestra el segundo menú con opciones específicas para ingresar alergias.
    """
    print("a. Ingresar alergias por nombre \n"
          "b. Ingresar alergias por valor \n"
          "c. Ingresar alergias por nombre y valor \n"
          "d. Calcular la puntuación final de alergias")


def VerificarOpcion1(mensajeusuario, mensajeerror="No es una opción válida"):
    """
    Verifica y obtiene la opción ingresada por el usuario
    para el menú principal.

    :param mensajeusuario: Mensaje para solicitar la opción al usuario.
    :param mensajeerror: Mensaje de error a mostrar si la opción no es válida.
    :return: Opción válida ingresada por el usuario.
    """
    valor_legal = False
    # Pide el valor hasta que se ingrese uno correcto
    while not valor_legal:
        try:
            valorusuario = input(mensajeusuario)
            # Verifica si la opción ingresada está dentro de las opciones
            if (valorusuario == "1" or valorusuario == "2" or
                    valorusuario == "3" or valorusuario == "4"):
                valor_legal = True
            else:
                # Sino imprime el mensaje de error
                print(mensajeerror)
        except ValueError:
            # Si encuentra un error imprime el mensaje
            print(mensajeerror)
    return (valorusuario)


def VerificarOpcion2(mensajeusuario, mensajeerror="No es una opción válida"):
    """
    Verifica y obtiene la opción ingresada por el usuario para el segundo menú.

    :param mensajeusuario: Mensaje para solicitar la opción al usuario.
    :param mensajeerror: Mensaje de error a mostrar si la opción no es válida.
    :return: Opción válida ingresada por el usuario.
    """
    valor_legal = False
    # Pide el valor hasta que se ingrese uno correcto
    while not valor_legal:
        try:
            valorusuario = input(mensajeusuario).lower()
            # Verifica si la opción ingresada está dentro de las opciones
            if (valorusuario == "a" or valorusuario == "b"
                    or valorusuario == "c" or valorusuario == "d"):
                valor_legal = True
            else:
                # Sino imprime el mensaje
                print(mensajeerror)
        except ValueError:
            # Si encuentra un error imprime el mensaje
            print(mensajeerror)
    return (valorusuario)


def VerificarInt(mensajeusuario,
                 mensajeerror="No es un número válido, verifique"):
    """
    Verifica y obtiene un número entero ingresado por el usuario.

    :param mensajeusuario: Mensaje para solicitar el número al usuario.
    :param mensajeerror: Mensaje de error a mostrar si el número no es válido.
    :return: Número entero válido ingresado por el usuario.
    """
    valor_legal = False
    while not valor_legal:
        try:
            valorusuario = int((input(mensajeusuario)))
            # Verifica que sea positivo
            if valorusuario > 0:
                valor_legal = True
            else:
                # Sino imprime el mensaje
                print(mensajeerror)
        except ValueError:
            # Si encuentra un error imprime el mensaje
            print(mensajeerror)
    return (valorusuario)


def procesarOpcion():
    """
    Función principal que maneja la ejecución del programa.

    Muestra el menú principal y realiza las acciones
    correspondientes según la opción ingresada por el usuario.
    """
    while True:
        mostrarMenu()
        opc = VerificarOpcion1("Ingrese una opción: ")
        if opc == "1":
            # Si la opción es 1 pide la puntuación general
            evaluacion = EvaluacionEspecifica()
            num = VerificarInt("Ingrese su puntuación general: ")
            # Busca las alergias asociadas con evaluarAlergias
            listas = evaluacion.evaluarAlergias(num)
            # Muestra las alergias
            evaluacion.mostarInfo(listas)
        elif opc == "2":
            # Si la opción es 2 crea un objeto TiposDeAlergias()
            tipo = TiposDeAlergias()
            while True:
                # Muesta un segundo menu
                menuDos()
                opc2 = VerificarOpcion2("Ingrese una opción: ")
                if opc2 == "a":
                    # Si la opción es "a", llama ingresarNombre()
                    tipo.ingresarNombre()
                elif opc2 == "b":
                    # Si la opción es "b", llama ingresarValor()
                    tipo.ingresarValor()
                elif opc2 == "c":
                    # Si la opción es "c", llama ingresarNombreValor()
                    tipo.ingresarNombreValor()
                else:
                    # Si la opción es "d" calula la puntuación con la lista
                    # construida con las pasadas opciones
                    general = EvaluacionGeneral()
                    # LLama calcular puntuación
                    general.calcularPuntuacion(tipo.listaFinal)
                    total = len(tipo.listaFinal) + len(
                        tipo.nombreNoEncontrado) + len(tipo.valorNoEncontrado)
                    # Llama calcular promedio
                    general.calcularPromedio(total, len(tipo.listaFinal))
                    # Si las listas de datos desconodios no están vacías
                    if len(tipo.nombreNoEncontrado) != 0:
                        print("Los nombres desconocidos de alergias son: ")
                        general.resultadosDesconocidos(tipo.nombreNoEncontrado)
                        print("\n")

                    if len(tipo.valorNoEncontrado) != 0:
                        print("Los nombres desconocidos de alergias son: ")
                        general.resultadosDesconocidos(tipo.valorNoEncontrado)
                        print("\n")
                    break
        elif opc == "3":
            evaluacion = EvaluacionEspecifica()
            evaluacion.AgregarAlergia()
        else:
            print("Saliendo del programa...")
            break


# Llama procesarOpcion()
procesarOpcion()

"""
tiempo_ejecucion = timeit.timeit(procesarOpcion, number=1)
print(f'Tiempo de ejecución: {tiempo_ejecucion} segundos')
"""
