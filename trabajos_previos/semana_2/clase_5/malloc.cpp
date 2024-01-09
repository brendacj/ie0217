#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    // casting a entero puntero por malloc devuelve void*
    int* ptr = (int*)malloc(sizeof(int)); // Recibe un entero (numero de bytes size of devuelve eso)

    //Asigno un 5
    *ptr = 5;
    //Imprime    
    cout << *ptr;

    return 0;
}