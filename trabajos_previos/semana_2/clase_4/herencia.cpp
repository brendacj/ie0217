#include <iostream>
using namespace std;

class Animal {
    public:
        void eat(){
            cout << "I can eat!" << endl;
        }

        void sleep(){
            cout << "I can slep!" << endl;
        }
};

// Paso la parte pública de la clase animal a la de Dog
class Dog : public Animal {
    public:
        void bark() {
            cout << "I can  bark! Wof Wofxd" << endl;
        }
};

int main() {
    Dog dog1;

    //Los objetos de tipo Dog pueden acceder a los métodos de Animal
    dog1.eat();
    dog1.sleep();

    dog1.bark();

    return 0;
}
