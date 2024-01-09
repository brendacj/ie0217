#include <iostream>
#include <string>
using namespace std;

class Animal {
    private:
        string color;

    protected:
        string type;

    public:
        void run() { cout << "I can run --BASE!" << endl;}
        void eat() { cout << "I can eat!" << endl;}
        void sleep() { cout << "I can sleep!" << endl;}
        void setColor(string clr) { color = clr;}
        string getColor(){ return color;}
};

// Clase derivada
// Aquí se pude usar type, porque es derivada
class Dog : public Animal {
    public:
        void run() { cout << "I can -- DERIVED!" << endl;}
        void setType(string tp) { type = tp;}
        void displayInfo(string c) {
            cout << "I am a " << type << endl;
            cout << "My color is " << c << endl;
        }

        void bark() { cout << "I can bark! wof wof" << endl;}
};

int main() {
    Dog dog1;
    // Aquí se sobre escribe
    dog1.run();
    // Otros metodos de la clase base
    dog1.eat();
    dog1.sleep();
    dog1.setColor("black");

    dog1.bark();
    dog1.setType("Doberman");
    dog1.displayInfo(dog1.getColor());
    return 0;
}