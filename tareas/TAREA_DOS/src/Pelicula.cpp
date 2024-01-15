# include "Pelicula.hpp"

Pelicula::Pelicula(
    string titulo,
    string grupo,
    string material,
    string autor,
    string genero,
    string estado,
    int duracion,
    double precio
): MaterialAudiovisual(titulo, grupo, "Pelicula", autor, genero, estado, duracion, precio){
    tamano = tamanoPelicula(duracion);
}

Pelicula::Pelicula() : MaterialAudiovisual("", "", "", "", "", "", 0, 0.0) {
    tamano = "desconocido";
}

string Pelicula::tamanoPelicula(int duracion){
    if (duracion < 90){
        return "corta";
    } else if (duracion >= 90 && duracion < 150){
        return "mediana";
    } else {
        return "larga";
    } 
}

void Pelicula::imprimirPelicula(
    string titulo,
    string grupo,
    string material,
    string autor,
    string genero,
    string estado,
    string tamano,
    double precio
    ){
    cout << "Titulo: " << titulo<< " Grupo: "<< grupo << " Material: "<< material << " Autor: "<< autor << " Genero: "<< genero << " Estado: "<< estado << " Tamaño: "<< tamano << " Precio: "<< precio <<endl;
}