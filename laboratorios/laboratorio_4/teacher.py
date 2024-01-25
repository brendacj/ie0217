from persona import Person
# Clse Maestro
class Teacher(Person):
    # Constructor
    def __init__(self, name, age, empleyee_id):
        # Constructor de la clase base
        super().__init__(name, age)
        #Atributos
        self.empleyee_id = empleyee_id
        self.courses_taught = []

    # También agregar el curso a la lsita de cursos
    def assign_course(self, course):
        self.courses_taught.append(course)

    # Muestra la infromación de esta clase
    def display_info(self):
        super().displayinfo()
        print(f"Employee ID: {self.empleyee_id} \
               \nCourses taught: {', '.join(self.courses_taught)}")