/**
 * @file main.cpp
 * @brief Contiene la lógica principal del programa
 * @details Este software está sujeto a los términos y condiciones de la Licencia MIT.
 * Entre otras cosas se establece que si se utiliza o distribuye partes sustanciales del
 * programa, se deben incluir el aviso de derechos de autor y el aviso de permiso en tu distribución.
 */#include "VerificarCorreo.hpp"
/// Instanciar un objeto VerificarCorreo para validar la dirección de correo
VerificarCorreo validar;

int main(){
    std::string correo;
    
    try{
        /// Solicitar al usuario que ingrese una dirección de correo electrónico
        std::cout << "Ingrese una dirección de correo electrónico: ";
        std::cin >> correo;

        /// Verificar si la dirección de correo contiene '@'
        if (correo.find('@') == std::string::npos) {
            throw std::invalid_argument("La dirección de correo no contiene '@'");
        }

        /// Verificar si la dirección de correo es válida utilizando la clase VerificarCorreo
        if (validar.verificarCorreo(correo)) {
            std::cout << "La dirección de correo electrónico es válida." << std::endl;
        } else {
            std::cout << "La dirección de correo electrónico NO es válida." << std::endl;
        }
    } catch (const std::invalid_argument& e){
        /// Capturar y mostrar excepciones de tipo invalid_argument
         std::cerr << e.what() << std::endl;

    }

    return 0;
}