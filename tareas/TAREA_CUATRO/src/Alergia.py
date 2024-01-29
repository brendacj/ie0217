class Alergia():

    alergiasSistema = {"huevo" : 1 , "cacahuetes" : 2, "mariscos": 4, "fresas": 8, "tomates": 16, "chocolate": 32, "polen": 64, "gatos": 128, "sardina": 256, "glúten": 512}
    # Constructor inicializa las variables
    def __init__(self, nombre, valor):
        self.nombreAlergia = nombre
        self.valorAlergia = valor
    # Muestra la información
    def imprimir_alergia(self):
        print(f"Nombre: {self.nombreAlergia}\nValor: {self.valorAlergia}")