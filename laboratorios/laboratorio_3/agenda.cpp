#include "agenda.hpp"


template<typename T>
void Agenda<T>::agregarContacto(const Contacto<T>& contacto){
    typename std::list<Contacto<T> >:: const_iterator it;
    // Verificar que no esté el contacto
    for(it = contactos.begin(); it != contactos.end(); it++){
        if (it->getTelefono() == contacto.getTelefono()){
            throw std::invalid_argument("Ya existe un contacto con es numero");
        }
    }

    contactos.push_back(contacto);
}

template<typename T>
void Agenda<T>::eliminarContacto(const T& telefono){
    typename std::list<Contacto<T>>:: const_iterator it;
    // Buscar el contacto y borrarlo si hay una coincidencia
    for(it = contactos.begin(); it != contactos.end(); it++){
        if (it->getTelefono() == telefono){
            contactos.erase(it);
            return;
        }
    }
    throw std::out_of_range("No se encuentra un contacto con ese numero");
}

template<typename T>
// Imprimir ls información del contacto
void Agenda<T>::mostrarContactos() const{
    typename std::list<Contacto<T>>:: const_iterator it;
    for(it = contactos.begin(); it != contactos.end(); it++){
        std::cout << "Nombre: " << it->getNombre() << " "
                  << "Telefono " << it->getTelefono() << " "
                  << "Email " << it->getEmail() << " " << std::endl;
    }
}

template <typename T>
std::list<Contacto<T> > Agenda<T>::buscarContactos(const std::string& patron) const {
    // Crear una lista para almacenar los resultados de la búsqueda
    std::list<Contacto <T>> resultados;

    // Variables para almacenar la posición de la coincidencia en el nombre o email
    std::string::size_type pos;
     // Iterador constante para recorrer la lista de contactos
    typename std::list<Contacto<T>>:: const_iterator it;

    // Iterar a través de la lista de contactos
    for(it = contactos.begin(); it != contactos.end(); ++it){
        // Buscar el patrón en el nombre del contacto
        pos = it->getNombre().find(patron);
        // Si se encuentra el patrón en el nombre, agregar el contacto a los resultados
        if (pos != std::string::npos){
            resultados.push_back(*it);
        }else{
            // Si el patrón no se encuentra en el nombre, buscar en el email
            pos = it->getEmail().find(patron);

            // Si se encuentra el patrón en el email, agregar el contacto a los resultados
            if (pos != std::string::npos){
                resultados.push_back(*it);
            }
        }
    }
     // Devolver la lista de contactos que coinciden con el patrón
    return resultados;
}
