#include "biblioteca.hpp"

int main(){
    // Instanciar un objeto
    Biblioteca biblioteca;

    // Llamar a los métodos mediante el objeto
    biblioteca.agregarLibro("El Gran Gatsby", "F. Scott Fitzgerald");
    biblioteca.agregarLibro("1984", "George Orwell");

    biblioteca.mostrarCatalogo();

    return 0;
}