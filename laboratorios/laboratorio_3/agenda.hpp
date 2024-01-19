#ifndef AGENDA_HPP
#define AGENDA_HPP

#include <iostream>
#include <list>
#include <algorithm>
#include <stdexcept>
#include "contacto.hpp"

template <typename T>
class Agenda{
    public:
        void agregarContacto(const Contacto<T>& contacto);
        void eliminarContacto(const T& telefono);
        void mostrarContactos() const;
        std::list<Contacto<T> > buscarContactos(const std::string& patron) const;
    private:
        std::list<Contacto<T> > contactos;

};

#include "agenda.cpp"
#endif