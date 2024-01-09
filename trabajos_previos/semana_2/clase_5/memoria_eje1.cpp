#include <iostream>

// Segmento de data
int globalVariable = 42;

int main(){
    // Segmento stack
    int strackVariable = 10;
    //Segmento heap
    int* heapVariable = new int (20);

    // new devuelve una dirección de memoría por lo que 
    // se debe guardar en una tipo puntero
    int* pointVar;
    pointVar = new int;
    // Accede el valor de ese esapcio de memoria
    *pointVar = 45;

    std::cout << "Valor de globalVariable: " << globalVariable << std::endl;
    std::cout << "Valor de strakVariable: " << strackVariable << std::endl;
    std::cout << "Valor de heapVariable: " << heapVariable << std::endl;

    // Imprimer el valor de pointVar
    std::cout << *pointVar; 
    // La memoria del heap se debe liberar:
    delete heapVariable;

    // libera la memoria
    delete pointVar;
    return 0;
}