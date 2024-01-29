from EvaluacionEspecifica import EvaluacionEspecifica

evaluacion1 = EvaluacionEspecifica()
num = int(input("Ingrese su puntuación general: "))
listas = evaluacion1.evaluarAlergias(num)
evaluacion1.mostarInfo(listas)