#include <iostream>
using namespace std;

int main(){
    // Ingrea numero
    int num;
    cout << "Enter total number of studets: ";
    cin >> num;
    // Flotante puntero
    float* ptr;

    // Asigno un arreglo de glotante de tamaño num dinamicamente
    ptr = new float[num];

    // Pide los valores
    for (int i = 0; i < num; ++i){
         cout << "Student " << i + 1 << ": ";
         // Direcciones de memeoria continuas
         cin >> *(ptr + i);
    }

    // Muestra los valores
    cout << "\nDisplaying GPA of students." << endl;
    for (int i = 0; i < num; ++i){
        cout << "Student " << i + 1 << ": " << *(ptr + i) << endl;
    }

    // Liberar el espacio de 
    delete[] ptr;

    return 0;
}