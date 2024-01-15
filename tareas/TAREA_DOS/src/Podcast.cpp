# include "Podcast.hpp"

Podcast::Podcast(
    string titulo,
    string grupo,
    string material,
    string autor,
    string genero,
    string estado,
    int duracion,
    double precio
): MaterialAudiovisual(titulo, grupo, "Podcast", autor, genero, estado, duracion, precio){
    tamano = tamanoPodcast(duracion);
}

Podcast::Podcast() : MaterialAudiovisual("", "", "", "", "", "", 0, 0.0) {
    tamano = "desconocido";
}


string Podcast::tamanoPodcast(int duracion){
    if (duracion < 30){
        return "corta";
    } else if (duracion >= 30 && duracion < 90){
        return "mediana";
    } else {
        return "larga";
    } 
}

void Podcast::imprimirPodcast(){
    cout << "imprimir Podcast";
}