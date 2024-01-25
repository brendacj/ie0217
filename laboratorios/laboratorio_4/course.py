class Course():
    # Constructor
    def __init__(self, course_code, course_name):
        # Atributos
        self.course_code = course_code
        self.course_name = course_name

    # Mostrar la información
    def display_info(self):
        print(f"Course code: {self.course_code}" 
              f"Course name: {self.course_name}")