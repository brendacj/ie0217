#include <iostream>
using namespace std;

class Distance {
    private:
        int meter;

        // Función amiga sintaxis
        friend int addFive(Distance);
    
    public:
        Distance() : meter(0) {}
};

// Esta es la función amiga, por eso puede acceder a la variable metro
int addFive(Distance d) {
    d.meter +=5;
    return d.meter;
}

int main(){
    Distance D;
    cout << "Distance: " << addFive(D);
    return 0;
}