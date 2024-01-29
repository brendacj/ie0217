class EvaluacionGeneral():
    def __init__(self):
        self.puntuacion = 0
    def calcularPuntuacion(self,listaFinal):
        print("Lista final de alergias: \n")
        for objetosFinales in listaFinal:
            objetosFinales.imprimir_alergia()
            self.puntuacion += objetosFinales.valorAlergia

        print("\nLa puntuación final obtenida fue:",str(self.puntuacion))

    def resultadosDesconocidos(self, listaDesconocida):
        for desconocido in listaDesconocida:
            print(desconocido)

            
