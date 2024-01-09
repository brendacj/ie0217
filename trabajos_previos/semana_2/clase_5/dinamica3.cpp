#include <iostream>
using namespace std;

// Clase Estudiante
class Student {
    private:
        int age;

    public:

        Student() : age(12) {}

        void getAge() {
            cout << "Age = " << age << endl;
        }
};

int main(){
    // Asignar memoria dinamicamente a un objeto
    Student* ptr = new Student();

    ptr -> getAge();
    //Liberar la memroia
    delete ptr;

    return 0;
}