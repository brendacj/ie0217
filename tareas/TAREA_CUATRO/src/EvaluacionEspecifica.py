from Alergia import Alergia
import math


class EvaluacionEspecifica(Alergia):
    """
    Clase que realiza la evaluación específica de
    alergias para una puntuación general dada.

    Atributos:
    - puntuacionGeneral: Puntuación general de alergias.
    - alergiasPresentes: Lista de instancias de la clase
    Alergia asociadas a la puntuación.

    Métodos:
    - evaluarAlergias: Evalúa las alergias para la puntuación
    general y devuelve una lista de instancias de Alergia.
    - VerificarPotencia2: Verifica si un número es una potencia de 2.
    - VerificarStr: Verifica si un string es válido.
    - mostarInfo: Muestra información sobre la puntuación general
    y las alergias presentes.
    - AgregarAlergia: Agrega una nueva alergia al sistema.
    """

    def __init__(self):
        """
        Constructor de la clase EvaluacionEspecifica.
        Inicializa los atributos
        """
        self.puntuacionGeneral = 0
        self.alergiasPresentes = []

    def evaluarAlergias(self, puntuacionGeneral):
        """
        Evalúa las alergias para la puntuación general y
        devuelve una lista de instancias de Alergia.

        Parámetros:
        - puntuacionGeneral: Puntuación general de alergias a evaluar.

        Retorna:
        Lista de instancias de Alergia asociadas a la puntuación general.
        """
        self.puntuacionGeneral = puntuacionGeneral
        # Recorre ambos elementos del diccionario a la vez
        for alergia, valor in Alergia.alergiasSistema.items():
            # Compara byte por byte
            if self.puntuacionGeneral & valor:
                # Verificar si la alergia está presente
                nueva_alergia = Alergia(nombre=alergia, valor=valor)
                self.alergiasPresentes.append(nueva_alergia)

        return self.alergiasPresentes

    def VerificarPotencia2(self, mensajeusuario,
                           mensajeerror="No es un número válido"):
        """
        Verifica si un número es una potencia de 2.

        Parámetros:
        - mensajeusuario: Mensaje para solicitar el número al usuario.
        - mensajeerror: Mensaje de error en caso de entrada no válida.

        Retorna:
        Número que es potencia de 2.
        """
        valor_legal = False
        # Pide el valor hasta que se ingrese uno correcto
        while not valor_legal:
            try:
                valorusuario = int((input(mensajeusuario)))
                # Si al despejar la potencia es entero
                if math.log2(valorusuario).is_integer():
                    valor_legal = True
                else:
                    # Sino devuelve el mensaje
                    print(mensajeerror)
            except ValueError:
                # Si encuentra un error devuelve el mensaje
                print(mensajeerror)
        return (valorusuario)

    def VerificarStr(self, mensajeusuario,
                     mensajeerror="No es un nombre válido, verifique"):
        """
        Verifica si un string es válido.

        Parámetros:
        - mensajeusuario: Mensaje para solicitar el string al usuario.
        - mensajeerror: Mensaje de error en caso de entrada no válida.

        Retorna:
        String válido.
        """
        valor_legal = False
        # Pide el nombre hasta que se ingrese uno correcto
        while not valor_legal:
            try:
                valorusuario = (input(mensajeusuario))
                # Verifica si el str no está vacío
                if valorusuario.strip():
                    valor_legal = True
                else:
                    # Sino devuelve el mensaje
                    print(mensajeerror)
            except ValueError:
                # Si encuentra un error devueleve el mensaje
                print(mensajeerror)
        return (valorusuario)

    def mostarInfo(self, alergiasPresentes):
        """
        Muestra información sobre la puntuación general y
        las alergias presentes.

        Parámetros:
        - alergiasPresentes: Lista de instancias de Alergia
        asociadas a la puntuación general.
        """
        print("\nSu puntuación general es", self.puntuacionGeneral)
        print("Lista de alergias asociadas a la puntuación: ")
        for i in alergiasPresentes:
            i.imprimir_alergia()

    def AgregarAlergia(self):
        """
        Agrega una nueva alergia al sistema.
        """
        nombre = self.VerificarStr(
            "Ingrese el nombre de la alergia a ingresar: ")
        valor = self.VerificarPotencia2(
            "Ingrese el valor de la alergia a ingresar (Potencia de 2): ")
        Alergia.alergiasSistema[nombre.lower()] = valor
