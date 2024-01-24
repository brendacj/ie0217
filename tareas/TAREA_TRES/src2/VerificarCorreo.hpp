/**
 * @file VerificarCorreo.hpp
 * @brief Contiene la declaración de la clase VerificarCorreo y los prototipos de sus métodos.
 * @details Este software está sujeto a los términos y condiciones de la Licencia MIT.
 * Entre otras cosas se establece que si se utiliza o distribuye partes sustanciales del
 * programa, se deben incluir el aviso de derechos de autor y el aviso de permiso en tu distribución.
 */
#ifndef CORREO_HPP
#define CORREO_HPP

#include <regex>
#include <iostream>

/**
 * @brief Clase para verificar la validez de una dirección de correo electrónico.
 */
class VerificarCorreo {
    public:
         /**
         * @brief Verifica si una dirección de correo electrónico es válida.
         * 
         * @param correo Dirección de correo electrónico a verificar.
         * @return true si la dirección de correo es válida, false en caso contrario.
         */
        bool verificarCorreo(std::string &correo);

};

#endif