#ifndef CONTACTO_HPP
#define CONTACTO_HPP

#include <string>

template <typename T>
class Contacto{
    public:
        Contacto(T nombre, T telefono, T email);
        T getNombre() const; // const: El tipo siempre devuelve lo mismo, no va a estar cambiando
        T getTelefono() const;
        T getEmail() const;

    private:
        T nombre;
        T telefono;
        T email;
};

#include "contacto.cpp"

#endif