#include "moto.hpp"

Moto::Moto(int velocidad, bool tieneCasco): Vehiculo(velocidad), tieneCasco(tieneCasco){}

void Moto::usarCasco(){
    if (tieneCasco){
        cout << "Usando casco mientras conduce"<< endl;
    }else{
        cout << "Alerta!! No esta usando casco"<< endl;
    }
}