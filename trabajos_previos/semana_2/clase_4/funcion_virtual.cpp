# include <iostream>
using namespace std;

class Base {
    public:
        // Sintaxis: Quiero que sea sobreescrita
        virtual void print() {
            cout << "Base Funtion" << endl;
        }
};

class Derived : public Base {
    public:
        // Aquí se sobreescribe
        void print(){
            cout << "Derived Funtion" << endl;
        }
};

int main() {

    Derived derived1;
    // Base puntero   
    Base* base1 = &derived1;
    // Acceder al valor
    base1->print();

    return 0;
}