# Clase que hereda de la clase Exception
class SalaryNotInRangeError (Exception):
    """Exception raised for errors in the input salary.
    Attributes:
    salary -- input salary which caused the error
    message -- explanation of the error """

    # El constructo de esta clase maneja un error de salario fuera de rango
    # Con el saladrio como argumento y un mensaje de error por defecto
    def __init__(self, salary, message="Salary is not in (5000, 15000) range"):
        self.salary = salary
        self.message = message
        # Llama al onstructor de la clase base ("Execption")
        super().__init__ (self.message)

salary = int(input("Enter salary amount: "))
# Si el slario no está en el rango levanta la execpción de la clase
if not 5000 < salary < 15000:
    raise SalaryNotInRangeError(salary)


