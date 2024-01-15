# include "Noticia.hpp"

Noticia::Noticia(
    string titulo,
    string grupo,
    string material,
    string autor,
    string editorial,
    string genero,
    string estado,
    int cantiHojas,
    double precio
): MaterialLectura(titulo, grupo, "Noticia", autor, editorial, genero, estado, cantiHojas, precio){
    tamano = tamanoNoticia(cantiHojas);
}

Noticia::Noticia() : MaterialLectura("", "", "", "", "", "", "", 0, 0.0) {
    tamano = "desconocido";
}

string Noticia::tamanoNoticia(int cantiHojas){

    if (cantiHojas < 5){
        return "corta";
    } else if (cantiHojas >= 5 && cantiHojas < 10){
        return "mediana";
    } else {
        return "larga";
    }  
}

void Noticia::imprimirNoticia(){
    cout << "imprimir noticia";
}