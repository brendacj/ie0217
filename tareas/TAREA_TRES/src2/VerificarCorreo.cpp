#include "VerificarCorreo.hpp"

bool VerificarCorreo::verificarCorreo(std::string &correo){
    auto const regexCorreo = std::regex("^[^.-_][a-zA-Z0-9_.-]{0,15}[^.-_]@[a-zA-Z]+\\.+[a-zA-Z]{2,4}$");
    if (std::regex_match(correo,  regexCorreo)){
    return true;
    }else{
        return false;
    } 
} 