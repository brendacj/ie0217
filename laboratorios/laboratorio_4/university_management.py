# Importa las clases de los archivos
from student import Student
from course import Course
from teacher import Teacher

# Instacia objetos de tipo estudiante
student1 = Student("Esteban", 43, "B30754")
student2 = Student("Brenda", 19, "C21904")
# Instacia objetos de tipo profesor
teacher1 = Teacher("Jorge Romero", 65, "123456")
teacher2 = Teacher("Diego Marín", 61, "555555")

# Instacia objetos de tipo curso
course1 = Course("IE0217", "SDA")
course2 = Course("IE0323", "CD1")

# Se llama la función de matricular cursos para los 
# estudiantes
student1.enroll_course(course1.course_code)
student1.enroll_course(course2.course_code)

# Se llama la función de asignar cursos para los 
# profesores
teacher1.assign_course(course1.course_code)
teacher2.assign_course(course2.course_code)

# Mostrar la infromación del profesor y el estudiante
student1.display_info()
teacher1.display_info()
