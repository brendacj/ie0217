#include <iostream>
using namespace std;

class Molde {
    // Especificador de acceso
    public:
        double largo;
        double ancho;
        double altura;

        // Constructor de la clase, tiene el mismo nombre
        Molde(){
            cout << "Esto se ejecuta en cada instanciación" << endl;
            cout << "Iniciando un objeto de la clase Room" << endl;

        }

        //Pasar por argumento
        /*Molde(dible largo_p, double ancho_p, double largo_p) : largo(largo_p), ancho(ancho_p). alto(alto_p)*/

        // O también 
        /*Molde(doble largo_p, doble ancho_p, doble alto_p){
            largo = largo_p;
            ancho = ancho_p;
            alto = alto_p;
        }*/

        ~Molde(){ //Lo de aquí se ejecuta al final
            cout << "Hola, desde el destructor";
        }

        // Este es un método, es como una función jejeps
        double CalcularArea() {
            return largo * ancho;
        }

        double calcularVolumen(){
            return largo * ancho * altura;
        }
};

int main () {
    // Instancia, se pasan argumentos si se necesita
    Molde pared;

    // Acceder a los atributos
    pared.largo = 400.5;
    pared.ancho = 20.8;
    pared.altura = 315.2;

    // Así se llaman los parametros
    cout << "Area = " << pared.CalcularArea()  << endl;
    cout << "Volumen = " << pared.calcularVolumen() << endl;

    return 0;
}