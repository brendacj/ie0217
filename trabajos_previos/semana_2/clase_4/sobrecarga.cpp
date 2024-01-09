#include <iostream>
using namespace std;

class Fraccion {
    int numerador, denominador;
    public:
        Fraccion(int n, int d) : numerador(n), denominador(d) {}

        // metodos especiales: operadores
        Fraccion operator+(const Fraccion &f) {

            Fraccion resultado{
                // Crea algo así como un objeto, lo que le pasa al constructor es lo de {}
                numerador * f.denominador + f.numerador * denominador, denominador* f.denominador
            };
            // Devolver el resultado tipo fracción
            return resultado;
        }

        void imprimir(){
            cout << numerador << "/" << denominador << endl;
        }
};

int main() {
    Fraccion f1(1, 2);

    Fraccion f2(3, 4);
    // Se pueden sumar las funciones solamente porque se hizoz la sobrecarga
    Fraccion f3 = f1 + f2;

    f3.imprimir();
}
