#include "agenda.hpp"
#include <iostream>

int main(){
    // Objetos
    Contacto<std::string> contacto1("Juano", "27892323", "dj.juanito@gmail.com");
    Contacto<std::string> contacto2("Wiliam", "24595834", "willywak@outlook.es");
    Contacto<std::string> contacto3("Jan Santa", "34292919", "santamaria@gmail.com");

    Agenda<std::string> agenda;

    //Tratar de agregar el contactos si no hay ningún error
    try{
        agenda.agregarContacto(contacto1);
        agenda.agregarContacto(contacto2);
        agenda.agregarContacto(contacto3);

    } catch(const std::exception& e){
        std::cerr << "Error" << std::endl;
    }

    // Mostrar contactos
    std::cerr << "Contactos en la agenda: " << std::endl;
    agenda.mostrarContactos();

    // Tratar de eliminar el contacto
    try{
        agenda.eliminarContacto("24595834");
    }catch (const std::exception e) {
         std::cerr << "Error" << std::endl;
    }

    std::cerr << "Contactos en la agenda: " << std::endl;
    agenda.mostrarContactos();

    // Buscar por patrones
   std::list<Contacto<std::string>> resultados = agenda.buscarContactos("Juano");
   std::cerr << "Resultados de la búsqueda: " << std::endl;
    for (const auto& contacto : resultados) {
        std::cout << "Nombre: " << contacto.getNombre() << ", Teléfono: " << contacto.getTelefono() << ", Email: " << contacto.getEmail() << std::endl;
    }

}