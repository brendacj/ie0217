from Alergia import Alergia
class TiposDeAlergias(Alergia):
    def __init__(self):
        self.nombreNoEncontrado = []
        self.valorNoEncontrado = []
        self.listaFinal = []
    
    def ingresarNombre(self):
        cantidadAlergias = int(input("Ingrese la cantidad de alergias a registar: "))
        for i in range(cantidadAlergias):
            nombre = input("Ingrese el nombre de la alergia número"+ str(i) + ": ")
            for alergia in Alergia.alergiasSistema:
                if alergia == nombre:
                    nueva_alergia = Alergia(nombre=alergia, valor=Alergia.alergiasSistema[alergia])
                    self.listaFinal.append(nueva_alergia)
                    break
            else:
                self.nombreNoEncontrado.append(nombre)

        for i in self.listaFinal:
            i.imprimir_alergia()
        print("XDD")
        for j in self.nombreNoEncontrado:
            print(j)
            
