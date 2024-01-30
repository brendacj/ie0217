from Alergia import Alergia
import cProfile
import math


class TiposDeAlergias(Alergia):
    """
    Clase que representa un conjunto de tipos de alergias.
    Hereda de la clase Alergia.

    Atributos:
        nombreNoEncontrado (list): Lista para almacenar nombres de alergias no encontradas.
        valorNoEncontrado (list): Lista para almacenar valores de alergias no encontradas.
        listaFinal (list): Lista final que contiene instancias de la clase Alergia.

    Métodos:
        - VerificarInt: Método para verificar que la entrada del usuario sea un número entero positivo.
        - VerificarPotencia2: Método para verificar que la entrada del usuario sea una potencia de 2 positiva.
        - VerificarStr: Método para verificar que la entrada del usuario sea un nombre no vacío.
        - ingresarNombre: Método para ingresar alergias por nombre.
        - ingresarValor: Método para ingresar alergias por valor.
        - ingresarNombreValor: Método para ingresar alergias por nombre y valor.
    """
    def __init__(self):
        """
        Constructor de la clase TiposDeAlergias.
        Inicializa las listas de nombres no encontrados, valores no encontrados y la lista final.
        """
        self.nombreNoEncontrado = []
        self.valorNoEncontrado = []
        self.listaFinal = []

    def VerificarInt(self, mensajeusuario, mensajeerror = "No es un número válido, verifique"):
        """
        Verifica que la entrada del usuario sea un número entero positivo.

        Args:
            mensajeusuario (str): Mensaje para el usuario.
            mensajeerror (str): Mensaje de error en caso de entrada no válida.

        Returns:
            int: Valor entero positivo ingresado por el usuario.
        """
        valor_legal = False
        # Pide el valor hasta que se ingrese uno correcto
        while valor_legal == False:
            try:
                valorusuario = int((input(mensajeusuario)))
                # Si es mayor que 0
                if valorusuario > 0:
                    valor_legal = True
                else:
                    # Sino imprime el mensaje de error
                    print(mensajeerror)
            except:
                # Si encuentra un error imprime el mensaje de error
                print(mensajeerror)
        return (valorusuario)

    def VerificarPotencia2(self, mensajeusuario, mensajeerror = "No es un número válido, verifique"):
        """
        Verifica que la entrada del usuario sea una potencia de 2 positiva.

        Args:
            mensajeusuario (str): Mensaje para el usuario.
            mensajeerror (str): Mensaje de error en caso de entrada no válida.

        Returns:
            int: Valor de potencia de 2 positivo ingresado por el usuario.
        """
        valor_legal = False
        while valor_legal == False:
            try:
                valorusuario = int((input(mensajeusuario)))
                # Si al despejar la potencia es entero 
                if math.log2(valorusuario).is_integer() and valorusuario > 0:
                    valor_legal = True
                else:
                    # Sino imprime el mensaje de error
                    print(mensajeerror)
            except:
                # Si encuentra un error imprime el mensaje de error
                print(mensajeerror)
        return (valorusuario)

    def VerificarStr(self, mensajeusuario, mensajeerror="No es un nombre válido, verifique"):
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
        while valor_legal == False:
            try:
                valorusuario = (input(mensajeusuario))
                # Verifica si el str no está vacío
                if valorusuario.strip():
                    valor_legal = True
                else:
                    # Sino devuelve el mensaje
                    print(mensajeerror)
            except:
                # Si encuentra un error devueleve el mensaje
                print(mensajeerror)
        return (valorusuario)

    def ingresarNombre(self):
        """
        Permite al usuario ingresar alergias por nombre.
        """
        cantidadAlergias = self.VerificarInt(
            "Ingrese la cantidad de alergias a registar: ")
        for i in range(cantidadAlergias):
            # Pide el nombre de cada alergia
            nombre = self.VerificarStr(
                "Ingrese el nombre de la alergia número " + str(i + 1) + ": ")
            # Recorre las alergias del sistema
            for alergia in Alergia.alergiasSistema:
                yaEsta = False
                # Si encuentra la alergia
                if alergia == nombre:
                    # Busca si ya está en la lista final
                    for final in self.listaFinal:
                        # Si ya está se marca verdadera la variable
                        if final.nombreAlergia == alergia:
                            print("El nombre ya se encuentra en la lista")
                            yaEsta = True
                    # Rompe el ciclo
                    if yaEsta == True:
                        break
                    # Sino, hace un nuevo objeto con los datos y lo agrega a la lista final
                    nueva_alergia = Alergia(
                        nombre=alergia, valor=Alergia.alergiasSistema[alergia])
                    self.listaFinal.append(nueva_alergia)
                    break
            # Sino lo agrega a la lista de no encontrados
            else:
                self.nombreNoEncontrado.append(nombre)

    def ingresarValor(self):
        """
        Permite al usuario ingresar alergias por valor.
        """
        cantidadAlergias = self.VerificarInt(
            "Ingrese la cantidad de alergias a registar: ")
        for i in range(cantidadAlergias):
            # Pide el valor de cada alergia
            valor = self.VerificarPotencia2(
                "Ingrese el valor de la alergia número " + str(i + 1) + ": ")
            # Recorre las alergias del sistema
            for alergia in Alergia.alergiasSistema:
                yaEsta = False
                # Si encuentra la alergia
                if Alergia.alergiasSistema[alergia] == valor:
                    # Busca si ya está en la lista final
                    for final in self.listaFinal:
                        if final.valorAlergia == valor:
                            # Si ya está se marca verdadera la variable
                            print("El valor ya se encuentra en la lista")
                            yaEsta = True
                    # Rompe el ciclo
                    if yaEsta == True:
                        break
                    # Sino, hace un nuevo objeto con los datos y lo agrega a la lista final
                    nueva_alergia = Alergia(nombre=alergia, valor=valor)
                    self.listaFinal.append(nueva_alergia)
                    break
            # Sino lo agrega a la lista de no encontrados
            else:
                self.valorNoEncontrado.append(valor)

    def ingresarNombreValor(self):
        """
        Permite al usuario ingresar alergias por nombre y valor.
        """
        cantidadAlergias = self.VerificarInt(
            "Ingrese la cantidad de alergias a registar: ")
        for i in range(cantidadAlergias):
            # Pide el nombre
            nombre = self.VerificarStr(
                "Ingrese el nombre de la alergia número " + str(i + 1) + ": ")
            # Pide el valor
            valor = self.VerificarPotencia2(
                "Ingrese el valor de la alergia número " + str(i + 1) + ": ")
            # Crea directamente un objeto nuevo y lo agrega a la lista final
            nueva_alergia = Alergia(nombre=nombre, valor=valor)
            self.listaFinal.append(nueva_alergia)
