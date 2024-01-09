#include <iostream>
using namespace std;

class A {
    public:
        void display() {
            cout<< "Base class content.";
        }
};

// Multiples herencias
class B : public A {} ;

class C : public B {} ;

int main() {
    // objeto de la tercera clase pude acceder a un metodo de la primera
    C obj;
    obj.display();
    return 0;
}
