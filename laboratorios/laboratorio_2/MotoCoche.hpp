#ifndef MOTOCOCHE_HPP
#define MOTOCOCHE_HPP
#include "coche.hpp"
#include "moto.hpp"
class MotoCoche : public Coche, public Moto{
    public:
        MotoCoche(int velocidad, int numPuertas, bool tieneCasco);
};
#endif