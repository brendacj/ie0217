#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    // Flotantes punteros
    float *ptr, *new_ptr;
    //Casting
    ptr = (float*)malloc(5 * sizeof(float));
    
    //Verificar que no sea null
    if (ptr == NULL){
        cout << "Memory Allocation Failed";
        exit(1);
    }

    //Iniciazilar valores
    for (int i = 0; i <5; i++){
        ptr[i] = i * 1.5;
    }

    // Cambiar el tamaño
    // Recibe, a lo que le quiero cambiar el tamaño y lanueva asignación
    new_ptr = (float*) realloc(ptr, 10 * sizeof(float));
    // Igual verifica que no sea null
    if (new_ptr == NULL){
        cout << "Memory Re-allocation Failed";
        exit(1);
    }

    // Inicializa los otros valores
    for (int i = 5; i < 10; i++){
        new_ptr[i] = i*2.5;
    }
    
    //Imprime todos los valores
    cout << "Printing Values" << endl;

    for (int i = 0; i <10; i++){
        cout << new_ptr[i] << endl;
    }

    //Libera la memeoria
    free(new_ptr);

    return 0;
}