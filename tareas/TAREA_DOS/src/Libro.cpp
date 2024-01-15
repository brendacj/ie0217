# include "Libro.hpp"

Libro::Libro(
    string titulo,
    string grupo,
    string material,
    string autor,
    string editorial,
    string genero,
    string estado,
    int cantiHojas,
    double precio
): MaterialLectura(titulo, grupo, "Libro", autor, editorial, genero, estado, cantiHojas, precio){
    tamano = tamanoLibro(cantiHojas);
}

Libro::Libro() : MaterialLectura("", "", "", "", "", "", "", 0, 0.0) {
    tamano = "desconocido";
}

string Libro::tamanoLibro(int cantiHojas){

    if (cantiHojas < 100){
        return "corto";
    } else if (cantiHojas >= 100 && cantiHojas < 200){
        return "mediano";
    } else {
        return "largo";
    }  
}

void Libro::imprimirLibro(
    string titulo,
    string grupo,
    string material,
    string autor,
    string editorial,
    string genero,
    string estado,
    string tamano,
    double precio
    ){
    cout << "Titulo: " << titulo<< " Grupo: "<< grupo << " Material: "<< material << " Autor: "<< autor << " Editorial: "<< editorial << " Genero: "<< genero << " Estado: "<< estado << " Tamaño: "<< tamano << " Precio: "<< precio <<endl;
}