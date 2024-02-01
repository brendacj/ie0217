import pandas as pd
import numpy as np
import matplotlib.pyplot as plt

class Prestamo:
    # Constuctor de la clase con los elementos del prestamo
    def __init__(self, monto_prestamo, tasa_interes_anual, cuotas):
        # Inicializa los atributos
        self.monto_prestamo = monto_prestamo
        self.tasa_interes_anual = tasa_interes_anual
        self.cuotas = cuotas
        self.amortizacion = self.calcular_amortizacion()

    # Calcular
    def calcular_amortizacion(self):
        try:
            # Formulas para tasa de interes y cuota mensual
            tasa_interes_mensual = self.tasa_interes_anual / 12 / 100
            cuota_mensual = (tasa_interes_mensual * self.monto_prestamo) / (1 - (1 + tasa_interes_mensual)**-self.cuotas)
            # Inicializar el saldo restante
            saldo_restante = self.monto_prestamo
            amortizacion = []
            for cuota in range(1, self.cuotas + 1):
                # Llenar la lista de amortización con diccionarios de información
                # Formulas
                interes_pendiente = saldo_restante * tasa_interes_mensual
                amortizacion_principal = cuota_mensual - interes_pendiente

                saldo_restante -= amortizacion_principal
                amortizacion.append({'Cuota':cuota, 'Interes': interes_pendiente, 'Amortizacion': amortizacion_principal, 'Saldo restante': saldo_restante})
            return amortizacion
        except ZeroDivisionError:
            # En caso de que divida entre 0
            print("El número de cuotas no puede ser 0")
            return[]
        

    def generar_reporte(self,archivo_salida):
        try:
            # Pasar el contenido de amortizacion a un data frame y luego a un archivo csv
            df = pd.DataFrame(self.amortizacion)
            df.to_csv(archivo_salida, index = False)
            print(f'Reporte generdo con éxito: {archivo_salida}')

        except Exception as e:
            # Si ocurrer un error
            print(f'ocurrio un error al generar el reporte: {str(e)}')

    def graficar_amortizacion(self):
        # Convierte de nuevo da DataFrame
        df = pd.DataFrame(self.amortizacion)
        # Crea un arreglo
        data = np.array([df['Interes'], df['Amortizacion']])

        # Crea un gráfico de barras del arreglo
        plt.bar(df['Cuota'], data[0], label = 'Interes')
        plt.bar(df['Cuota'], data[1], bottom=data[0], label = 'Amortizacion')

        # Especificaciones e impresión
        plt.xlabel('Número de cuota')
        plt.ylabel('Monto ($)')
        plt.title('Amortiacion e Interes por cuota')
        plt.legend()
        plt.show()

def main():
    try:
        # Pedir el monto al usuario
        monto_prestamo = float(input("Ingrese el monto del préstamo: "))
        if monto_prestamo < 0:
            raise ValueError("El monto del préstamo no puede ser negativo")

        # Pedir la tasa de interés anual
        tasa_interes_anual = float(input("Ingrese la tasa de interés anual: "))
        if tasa_interes_anual < 0:
            raise ValueError("El monto del préstamo no puede ser negativo")

        # Pedir la cantidad de cuotas
        cuotas = int(input("Ingrese la cantidad de cuotas: "))
        if cuotas < 0:
            raise ValueError("El monto del préstamo no puede ser negativo")

        # Instanciar el préstamo
        prestamo = Prestamo(monto_prestamo, tasa_interes_anual, cuotas)

        # Imprimir información: monto, tasa, cuotas
        print("\nInformación del Préstamo:")
        print(f"Monto del préstamo: {prestamo.monto_prestamo}")
        print(f"Tasa de interés anual: {prestamo.tasa_interes_anual}%")
        print(f"Cantidad de cuotas: {prestamo.cuotas}")

        prestamo.generar_reporte("reporte.csv")

        # Graficar la amortización
        prestamo.graficar_amortizacion()

    except ValueError as a:
        # ValueError (entrada no válida)
        print(f"Error, valor invalido: {str(a)}")
    except Exception as e:
        # Manejo de excepciones genérico
        print(f"Ocurrió un error mientras se ejecutaba el código: {str(e)}")

if __name__ == "__main__":
    main() # Llamar al main

    