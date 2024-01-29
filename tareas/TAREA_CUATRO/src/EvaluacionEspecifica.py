from Alergia import Alergia

class EvaluacionEspecifica(Alergia):
    def __init__(self):
        self.puntuacionGeneral = 0
        self.alergiasPresentes = []

    def evaluarAlergias (self, puntuacionGeneral):
        self.puntuacionGeneral = puntuacionGeneral
        for alergia, valor in Alergia.alergiasSistema.items():
            if self.puntuacionGeneral & valor:
                nueva_alergia = Alergia(nombre=alergia, valor=valor)  # Verificar si la alergia está presente
                self.alergiasPresentes.append(nueva_alergia)

        return self.alergiasPresentes
    
    def mostarInfo(self,alergiasPresentes):
        print("Su puntuación es general es", self.puntuacionGeneral)
        for i in alergiasPresentes:
            i.imprimir_alergia()

    def AgregarAlergia(self):
        nombre = input("Ingrese el nombre de la alergia a ingresar: ")
        valor = int(input("Ingrese el valor de la alergia a ingresar (Potencia de 2): "))
        Alergia.alergiasSistema[nombre] = valor
