#include <iostream>
using namespace std;

// Dos clases
class Mammal {
    public:
        Mammal(){
            cout<< "Mamals can give direct birth." << endl;
        }
};

class WingedAnimal {
    public:
        WingedAnimal(){
            cout << "Winged animal can flap" << endl;
        }
};

// Esta clase tiene de herencoia las otras dos al mismo tiempo
class Bat : public Mammal, public WingedAnimal {};

int main() {
    // El objeto de la tercera clase ejecutará el constructor de las otras dos
    Bat b1;
    return 0;
}