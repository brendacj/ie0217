class EvaluacionGeneral():
    def __init__(self):
        self.puntuacion = 0
    def calcularPuntuacion(self,listaFinal):
        print("\nLista final de alergias: \n")
        for objetosFinales in listaFinal:
            objetosFinales.imprimir_alergia()
            self.puntuacion += objetosFinales.valorAlergia

        print("\nLa puntuación final obtenida fue:",str(self.puntuacion))

    def calcularPromedio(self, total, encontrados):
        porcentaje = round((encontrados/total)*100, 3)
        print("El porcentaje de alergias encontradas fue: "+ str(porcentaje) + "%")

    def resultadosDesconocidos(self, listaDesconocida):
        for desconocido in listaDesconocida:
            print(desconocido)

            
