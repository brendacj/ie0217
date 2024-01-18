#include <iostream>
#include <regex>

int main(){
    // Interpreta el tipo de dato
    // Se crea un string que pueda llevar my o your
    auto const regex = std::regex("(my|your)");

    // Creo una cadena que contenga el regex
    auto const myText = std::string("A piece of text that contains my regex. ");
    // booleano que busca coincidencias en el regex con regex_search 
    bool const myTextContainsRegex = std::regex_search(myText, regex);

    auto const yourText = std::string("A piece of text that contains your regex. ");
    bool const yourTextContainsRegex = std::regex_search(yourText, regex);

    auto const theirText = std::string("A piece of text that contains their regex. ");
    bool const theirTextContainsRegex = std::regex_search(theirText, regex);

    // Impresión de los verdaderso o falso de los booleanos
    std::cout << std::boolalpha
              << myTextContainsRegex << '\n'
              << yourTextContainsRegex << '\n'
              << theirTextContainsRegex << '\n';


}