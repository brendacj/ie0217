#include "VerificarCorreo.hpp"

VerificarCorreo validar;

int main(){
    std::string correo;
    
    try{
        std::cout << "Ingrese una dirección de correo electrónico: ";
        std::cin >> correo;

        if (correo.find('@') == std::string::npos) {
            throw std::invalid_argument("La dirección de correo no contiene '@'");
        }

        if (validar.verificarCorreo(correo)) {
            std::cout << "La dirección de correo electrónico es válida." << std::endl;
        } else {
            std::cout << "La dirección de correo electrónico NO es válida." << std::endl;
        }
    } catch (const std::invalid_argument& e){
         std::cerr << e.what() << std::endl;

    }

    return 0;
}