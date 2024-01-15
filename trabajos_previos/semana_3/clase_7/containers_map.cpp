#include <iostream>
// Se incluye la biblioteca map
#include <map>

using namespace std;

int main(){
    // Sintaxis: map, el tipo de dato del key, el tipo de dato del valor
    // y el nombre del map
    map<int, string> student;

    // En elkey especificado en el aprentesis cuadrado se inserta el nombre
    student[1] = "Jacqueline";
    student[2] = "Blake";

    // También inserta valores, pero recibe un par ordenado
    student.insert(make_pair(3, "Denise"));
    student.insert(make_pair(4, "Blake"));

    // Los keys se van a reescribir, solo puede haber uno
    student[5] = "Timothy";
    student[5] = "Aaron";

    // Ciclo para imprimir
    for (int i = 1; i <= student.size(); ++i){
        cout << "Student[" << i << "]: " << student[i] << endl;
    }

    return 0;
}