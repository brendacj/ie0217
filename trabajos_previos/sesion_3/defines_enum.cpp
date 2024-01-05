#include <iostream>
using namespace std;

// Define BOOK_ID_MAX
#define BOOK_ID_MAX 10

// Enumeración de casas
enum {
    CASA_BADILLA,
    CASA_ALVARADO,
    CASA_SOLANO,
    CASA_MAX
}casas_t;

int main (){
    // Sería lo mismo que usar el 10 directamente
    cout << "El valor de Book ID Max es: " << BOOK_ID_MAX << endl;
    // Como es recuencial, el valor de CASA_MAX es el número de casas (Bueno realmente es +1, pero así venía en el presentación)
    cout << "La cantidad de casas en el condominio es: " << CASA_MAX << endl;

    return 0; 
}