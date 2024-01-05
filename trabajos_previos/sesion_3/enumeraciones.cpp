#include <iostream>
using namespace std;

#define MI_PRIMER_DEFINE 925 // El define es para establecer un número de forma que sea 
// entendible para el usuario

// Defino los identificadores de las estaciones
enum seasons {
    spring = 34,
    summer = 4,
    autumn = 9,
    winter = 32

};

enum enumcito {
    carro,
    casa,
    arbol,
    patio
};

int main (){
    // s puede tomar el valor de los elementos de seasons
    seasons s;
    s = winter;
    // Se muestra el de winter
    cout << "Summer = " << s << endl;

    // Aquí se imprime el define, es lo mismo si se pone un 925
    cout << "Define = " << MI_PRIMER_DEFINE << endl;
    // Puedo poner el identificador o el nombre directamente
    cout << "arbol: " << arbol << endl; 

    return 0; 
}