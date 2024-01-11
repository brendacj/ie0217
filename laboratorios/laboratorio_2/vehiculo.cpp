#include "vehiculo.hpp"

Vehiculo::Vehiculo(int velocidad){
    this->velocidad = velocidad;
}

void Vehiculo::acelerar(){
    cout << "Ascelerar desde "<< velocidad << " km/h" << endl;
}

void Vehiculo::frenar(){
    cout << "Frenar" << endl;
}