class EvaluacionGeneral():
    """
    Clase que realiza evaluaciones generales de alergias.

    Esta clase tiene métodos para calcular la puntuación total de alergias,
    el porcentaje de alergias encontradas y mostrar los resultados desconocidos.
    """
    def __init__(self):
        """
        Constructor de la clase. Inicializa la puntuación en cero.
        """
        self.puntuacion = 0

    def calcularPuntuacion(self, listaFinal):
        """
        Calcula la puntuación total sumando los valores de las alergias presentes en la lista final.

        :param listaFinal: Lista de instancias de la clase Alergia.
        """
        print("\nLista final de alergias: \n")
        # Imprime la lista
        for objetosFinales in listaFinal:
            objetosFinales.imprimir_alergia()
            # Aumenta la suma de puntuacion
            self.puntuacion += objetosFinales.valorAlergia

        print("\nLa puntuación final obtenida fue:", str(self.puntuacion))

    def calcularPromedio(self, total, encontrados):
        """
        Calcula y muestra el porcentaje de alergias encontradas en comparación con el total.

        :param total: Total de alergias evaluadas.
        :param encontrados: Cantidad de alergias encontradas.
        """
        porcentaje = round((encontrados/total)*100, 3)
        print("El porcentaje de alergias encontradas fue: " + str(porcentaje) + "%")

    def resultadosDesconocidos(self, listaDesconocida):
        """
        Muestra los resultados desconocidos.

        :param listaDesconocida: Lista de elementos desconocidos.
        """
        for desconocido in listaDesconocida:
            print(desconocido)
