/**
 * @file VerificarCorreo.cpp
 * @brief Contiene la implementación de los métodos de la clase VerificarCorreo
 * @details Este software está sujeto a los términos y condiciones de la Licencia MIT.
 * Entre otras cosas se establece que si se utiliza o distribuye partes sustanciales del
 * programa, se deben incluir el aviso de derechos de autor y el aviso de permiso en tu distribución.
 */
#include "VerificarCorreo.hpp"

/**
 * @brief Verifica si una dirección de correo electrónico es válida.
 * 
 * Utiliza una expresión regular para verificar si la dirección de correo cumple con el formato esperado.
 * 
 * @param correo Dirección de correo electrónico a verificar.
 * @return true si la dirección de correo es válida, false en caso contrario.
 */
bool VerificarCorreo::verificarCorreo(std::string &correo){
    /// Expresión regular para validar la dirección de correo
    auto const regexCorreo = std::regex("^[a-zA-Z0-9][a-zA-Z0-9_.-]{0,15}[a-zA-Z0-9]@[a-zA-Z]+\\.+[a-zA-Z]{2,4}$");
    /// Verifica si la dirección de correo coincide con la expresión regular
    if (std::regex_match(correo,  regexCorreo)){
    return true; /// La dirección de correo es válida
    }else{
        return false; /// La dirección de correo no es válida
    } 
} 