#include <iostream>
using namespace std;

class ClassB;

class ClassA {
    private:
        int numA;
        // Función amiga
        friend int add(ClassA, ClassB);
    
    public:
        ClassA() : numA(12) {}
};

class ClassB {
    private:
        int numB;
        // Aquí también está la función amiga
        friend int add(ClassA, ClassB);
    
    public:
        ClassB() : numB(1) {}
};
// Puede acceder a los atributos privados
int add(ClassA objectA, ClassB objectB){
    return (objectA.numA + objectB.numB);
}

int main(){
    ClassA objectA;
    ClassB objectB;
    cout << "Sum: " << add(objectA, objectB);
    return 0;
}