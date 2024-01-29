from Alergia import Alergia
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
                valor_legal=True
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
                    nueva_alergia = Alergia(nombre=alergia, valor=Alergia.alergiasSistema[alergia])
                    self.listaFinal.append(nueva_alergia)
                    break
            else:
                self.nombreNoEncontrado.append(nombre)

    
    def ingresarValor(self):
        cantidadAlergias = self.VerificarInt("Ingrese la cantidad de alergias a registar: ")
        for i in range(cantidadAlergias):
            valor = self.VerificarInt("Ingrese el valor de la alergia número "+ str(i + 1) + ": ")
            for alergia in Alergia.alergiasSistema:
                if Alergia.alergiasSistema[alergia] == valor:
                    nueva_alergia = Alergia(nombre=alergia, valor=valor)
                    self.listaFinal.append(nueva_alergia)
                    break
            else:
                self.valorNoEncontrado.append(valor)
       

    def ingresarNombreValor(self):
        cantidadAlergias = self.VerificarInt("Ingrese la cantidad de alergias a registar: ")
        for i in range(cantidadAlergias):
            nombre = self.VerificarStr("Ingrese el nombre de la alergia número "+ str(i + 1) + ": ")
            valor = self.VerificarInt("Ingrese el valor de la alergia número "+ str(i + 1) + ": ")
            nueva_alergia = Alergia(nombre=nombre, valor=valor)
            self.listaFinal.append(nueva_alergia)
