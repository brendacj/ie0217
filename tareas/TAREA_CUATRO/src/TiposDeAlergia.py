from Alergia import Alergia
import cProfile
import math

class TiposDeAlergias(Alergia):
    def __init__(self):
        self.nombreNoEncontrado = []
        self.valorNoEncontrado = []
        self.listaFinal = []

    def VerificarInt(self,mensajeusuario,mensajeerror ="No es un número válido, verifique"):
        valor_legal=False
        while valor_legal==False:
            try:
                valorusuario = int((input(mensajeusuario)))
                if valorusuario > 0:
                    valor_legal=True
                else:
                    print(mensajeerror)
            except:
                print(mensajeerror)
        return(valorusuario)
    
    def VerificarPotencia2(self,mensajeusuario,mensajeerror ="No es un número válido, verifique"):
        valor_legal=False
        while valor_legal==False:
            try:
                valorusuario = int((input(mensajeusuario)))
                if math.log2(valorusuario).is_integer() and valorusuario>0:
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
    
    def ingresarNombre(self):
        cantidadAlergias = self.VerificarInt("Ingrese la cantidad de alergias a registar: ")
        for i in range(cantidadAlergias):
            nombre = self.VerificarStr("Ingrese el nombre de la alergia número "+ str(i + 1) + ": ")
            for alergia in Alergia.alergiasSistema:
                if alergia == nombre:
                    for final in self.listaFinal:
                        if final.nombreAlergia == alergia:
                            print("El nombre ya se encuentra en la lista")
                            break
                    nueva_alergia = Alergia(nombre=alergia, valor=Alergia.alergiasSistema[alergia])
                    self.listaFinal.append(nueva_alergia)
                    break
            else:
                self.nombreNoEncontrado.append(nombre)

    
    def ingresarValor(self):
        cantidadAlergias = self.VerificarInt("Ingrese la cantidad de alergias a registar: ")
        for i in range(cantidadAlergias):
            valor = self.VerificarPotencia2("Ingrese el valor de la alergia número "+ str(i + 1) + ": ")
            for alergia in Alergia.alergiasSistema:
                yaEsta = False
                if Alergia.alergiasSistema[alergia] == valor:
                    for final in self.listaFinal:
                        if final.valorAlergia == valor:
                            print("El valor ya se encuentra en la lista")
                            yaEsta = True
                    if yaEsta == True:
                        break
                    nueva_alergia = Alergia(nombre=alergia, valor=valor)
                    self.listaFinal.append(nueva_alergia)
                    break
            else:
                self.valorNoEncontrado.append(valor)
       

    def ingresarNombreValor(self):
        cantidadAlergias = self.VerificarInt("Ingrese la cantidad de alergias a registar: ")
        for i in range(cantidadAlergias):
            nombre = self.VerificarStr("Ingrese el nombre de la alergia número "+ str(i + 1) + ": ")
            valor = self.VerificarPotencia2("Ingrese el valor de la alergia número "+ str(i + 1) + ": ")
            nueva_alergia = Alergia(nombre=nombre, valor=valor)
            self.listaFinal.append(nueva_alergia)

