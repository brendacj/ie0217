#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    int *ptr;
    // Casting, caloc recibe la cantidad de elementos y el tamaño de elementos (número de bytes)
    ptr = (int *)calloc(5, sizeof(int));
    if (!ptr){ // Si no es un valor valido
        cout << "Memory Allocation Failed";
        exit(1);
    }
    cout << "Initializing values..." << endl
        << endl;
    for (int i = 0; i < 5; i++){
        // Es como un arreglo
        ptr[i] = i*2 +1; // Direcciones secuanciales
    }
    cout << "Initializing values" << endl;
    for (int i = 0; i < 5; i++){
        /*ptr[i] y *(ptr + i) pueden ser intercambiados*/

        cout << *(ptr + i) << endl;
    }

    //liberar
    free(ptr);
    return 0;

}