#include <iostream>
using namespace std;

class Base {
    public:
        void print() {
            cout << "Base Function" << endl;
        }
};

class Derived : public Base {
    public:
        // Dos metodos que se llaman igual
        void print() {
            cout << "Derived Function" << endl;
        }
};

int main() {
    Derived derived1, derived2;
    // La clase derivada le va a caer encima al método
    derived1.print();

    // De esta manera se puede acceder todavía al método de la clase base
    derived2.Base::print();

    return 0;
}