#include <iostream>
using namespace std;

class Student {
    public:
        double marks;

        Student (double m) {
            marks = m;
        }
};
// Esta función recibe parametros de tipo Estudiante (Clase)
void calculateAvarage(Student s1, Student s2) {
    double average = (s1.marks + s2.marks) /2;
    cout << "Avarage Marks = " << average << endl;
}

int main() {
    // Pasar objetos como parametros
    // Crear objetos: Instanciar
    Student student1(88.0), student2(56.0);
    //Usa esos objetos como parametros
    calculateAvarage(student1, student2);

    return 0;
}