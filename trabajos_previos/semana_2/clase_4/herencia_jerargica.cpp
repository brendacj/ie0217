#include <iostream>
using namespace std;
// Clase animal
class Animal {
    public:
        void info() { cout << "I am an animal" << endl;}
};

// Dos clases con la clase de Animal como herencia
class Dog : public Animal{
    public:
        void bark() { cout << "I am a Dog" << endl;}
};

class Cat : public Animal{
    public:
        void meow() { cout << "I am a Cat" << endl;}
};

int main(){
    // Este objeto puede acceder al metodo de Animal y Dog
    Dog dog1;
    cout << "Dog class" << endl;
    dog1.info();
    dog1.bark();

    // Este objeto puede acceder al metodo de Animal y Cat
    Cat cat1;
    cout << "\n Cat class" << endl;
    cat1.info();
    cat1.meow();

    return 0;
}