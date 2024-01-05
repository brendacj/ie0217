#include <iostream>
using namespace std;

// Defino los identificadores de los días de la semana
enum week {
    Sunday,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday

};

int main (){
    // s puede tomar el valor de los elementos de week, en este caso que no
    // se han definido directamente, se toman sus posiciones, van en orden
    week today;
    today = Wednesday;
    cout << "Day " << today+1;
    return 0;
}