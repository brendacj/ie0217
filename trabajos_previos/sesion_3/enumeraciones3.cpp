#include <iostream>
using namespace std;

// Defino los identificadores de los palos de cartas
enum suit {
    club = 0,
    diamonds = 10,
    hearts = 20,
    spades = 3

} card; // Se define de una vez card

int main() {
    card = club;
    // Se saca el tamaño del los valores de card, en este caso son enteros, por lo que su valor será 4 bytes
    cout << "Size of enum variable " << sizeof(card) << " bytes.";
    return 0;
}