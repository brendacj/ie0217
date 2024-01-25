from persona import Person

class Student(Person):
    # Construtor
    def __init__(self, name, age, student_id):
        # Conturctor de la clase base
        super().__init__(name, age)
        # Atributos
        self.student_id = student_id
        self.courses = []
    # Función para matricular curso: Agrega a la lista cursos
    def enroll_course(self,course):
        self.courses.append(course)

    # Muestra la información de esta clase
    def display_info(self):
        super().displayinfo()
        print(f"Student_ID: {self.student_id} \
              \nCourses: {', '.join(self.courses)}")