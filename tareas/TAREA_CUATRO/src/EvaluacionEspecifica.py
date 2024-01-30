from Alergia import Alergia
import math

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
    
    def VerificarPotencia2(self,mensajeusuario,mensajeerror ="No es un número válido, verifique"):
        valor_legal=False
        while valor_legal==False:
            try:
                valorusuario = int((input(mensajeusuario)))
                if math.log2(valorusuario).is_integer():
                    valor_legal=True
                else:
                    print(mensajeerror)
            except:
                print(mensajeerror)
        return(valorusuario)
    
    def VerificarStr(self,mensajeusuario,mensajeerror ="No es un nombre válido, verifique"):
        valor_legal=False
        while valor_legal==False:
            try:
                valorusuario = (input(mensajeusuario))
                if valorusuario.strip(): 
                    valor_legal=True
                else:
                    print(mensajeerror)
            except:
                print(mensajeerror)
        return(valorusuario)
    
    def mostarInfo(self,alergiasPresentes):
        print("Su puntuación general es", self.puntuacionGeneral)
        print("Lista de alergias asociadas a la puntuación: ")
        for i in alergiasPresentes:
            i.imprimir_alergia()

    def AgregarAlergia(self):
        nombre = self.VerificarStr("Ingrese el nombre de la alergia a ingresar: ")
        valor = self.VerificarPotencia2("Ingrese el valor de la alergia a ingresar (Potencia de 2): ")
        Alergia.alergiasSistema[nombre] = valor
