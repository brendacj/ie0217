#include <iostream>
#include "students.hpp"
using namespace std;

int main() {
    // Pasar objetos como parametros
    // Crear objetos: Instanciar
    Student student1(88.0), student2(56.0);
    //Usa esos objetos como parametros
    calculateAvarage(student1, student2);

    return 0;
}