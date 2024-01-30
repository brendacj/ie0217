class Alergia():
    """
    nombre_archivo = "C:\\Users\\Usuario\\Desktop\\ie0217\\ie0217\\tareas\\TAREA_CUATRO\\src\\Alergias.txt"

    # Inicializar el diccionario
    alergiasSistema = {}

    # Leer el archivo
    with open(nombre_archivo, 'r') as archivo:
        numero_linea = 0
        # Leer línea por línea
        for linea in archivo:
            numero_linea += 1
            # Dividir la línea en nombre y valor de la alergia
            if '(' in linea and ')' in linea:
                nombre, valor_str = linea.strip().split('(')

                # Convertir el valor a entero
                valor = int(valor_str[:-1])  # Eliminar el paréntesis final

                # Agregar al diccionario
                alergiasSistema[nombre.strip()] = valor
            else:
                print("Formato incorrecto en la línea: " + str(numero_linea))

    """

    alergiasSistema = {"huevo" : 1 , "cacahuetes" : 2, "mariscos": 4, "fresas": 8, "tomates": 16, "chocolate": 32, "polen": 64, "gatos": 128, "sardina": 256, "glúten": 512}
    # Constructor inicializa las variables
    def __init__(self, nombre, valor):
        self.nombreAlergia = nombre
        self.valorAlergia = valor
    # Muestra la información
    def imprimir_alergia(self):
        print(f"Nombre: {self.nombreAlergia}\nValor: {self.valorAlergia}")