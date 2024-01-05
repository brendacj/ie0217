#include <iostream>
using namespace std;

int main(){
    // Define y inicializa las variables (enteros)
    int var1 = 3;
    int var2 = 24;
    int var3 = 17;

    // Usa el operador & para obtener su dirección de espacio de memoria
    cout << "Adress of var1: " << &var1 << endl;
    cout << "Adress of var2: " << &var2 << endl;
    cout << "Adress of var3: " << &var3 << endl;

}