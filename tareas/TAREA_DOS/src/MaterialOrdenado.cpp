# include "MaterialOrdenado.hpp"

MaterialOrdenado::MaterialOrdenado() {
    vectorDePunterosLibro = {};
    vectorDePunterosNoticia = {};
    vectorDePunterosPelicula = {};
    vectorDePunterosPodcast = {};
}

MaterialOrdenado::~MaterialOrdenado() {
    // Liberar memoria para cada objeto en vectorDePunterosLibro
    for (Libro* objeto : vectorDePunterosLibro) {
        delete objeto;
    }

    // Liberar memoria para cada objeto en vectorDePunterosNoticia
    for (Noticia* objeto : vectorDePunterosNoticia) {
        delete objeto;
    }

    // Liberar memoria para cada objeto en vectorDePunterosPelicula
    for (Pelicula* objeto : vectorDePunterosPelicula) {
        delete objeto;
    }

    // Liberar memoria para cada objeto en vectorDePunterosPodcast
    for (Podcast* objeto : vectorDePunterosPodcast) {
        delete objeto;
    }
}

void MaterialOrdenado::agregarMaterial(){
    string titulo, grupo, material, autor, editorial, genero, estado;
    int cantiHojas;
    double precio;

    cin.ignore();

    cout << "Ingrese el titulo: " << endl;
    std::getline(std::cin, titulo);
    for (char &c : titulo) {
        c = std::tolower(c);
    }

    cout << "Ingrese el autor: " << endl;
    std::getline(std::cin, autor);

    cout << "Ingrese el genero: " << endl;
    std::getline(std::cin, genero);

    cout << "Ingrese el estado: " << endl;
    std::getline(std::cin, estado);

    cout << "Ingrese el grupo: " << endl;
    std::getline(std::cin, grupo);

    cout << "Ingrese el tipo de material: " << endl;
    std::getline(std::cin, material);
    for (char &c : material) {
        c = std::tolower(c);
    }

    if (material == "libro"){
        cout << "Ingrese la editorial: " << endl;
        std::getline(std::cin, editorial);

        cout << "Ingrese la cantidad de hojas: " << endl;
        cin >> cantiHojas;

        cout << "Ingrese el precio: " << endl;
        cin >> precio;

        vectorDePunterosLibro.push_back(new Libro(titulo, grupo, material, autor, editorial, genero, estado, cantiHojas, precio));
        
    } else if (material == "noticia"){
        cout << "Ingrese la editorial: " << endl;
        std::getline(std::cin, editorial);

        cout << "Ingrese la cantidad de hojas: " << endl;
        cin >> cantiHojas;

        cout << "Ingrese el precio: " << endl;
        cin >> precio;

        vectorDePunterosNoticia.push_back(new Noticia(titulo, grupo, material, autor, editorial, genero, estado, cantiHojas, precio));

    } else if (material == "pelicula"){

        cout << "Ingrese la duracion en minutos: " << endl;
        cin >> cantiHojas;

        cout << "Ingrese el precio: " << endl;
        cin >> precio;

        vectorDePunterosPelicula.push_back(new Pelicula(titulo, grupo, material, autor, genero, estado, cantiHojas, precio));

    } else{

        cout << "Ingrese la duracion en minutos: " << endl;
        cin >> cantiHojas;

        cout << "Ingrese el precio: " << endl;
        cin >> precio;

        vectorDePunterosPodcast.push_back(new Podcast(titulo, grupo, material, autor, genero, estado, cantiHojas, precio));

    }
    
}

void MaterialOrdenado::eliminarMaterial(string titulo){
    for (size_t i = 0; i < vectorDePunterosLibro.size(); ++i) {
        if (vectorDePunterosLibro[i]->titulo == titulo) {
            delete vectorDePunterosLibro[i];
            vectorDePunterosLibro.erase(vectorDePunterosLibro.begin() + i);
        }
    }
    for (size_t i = 0; i < vectorDePunterosNoticia.size(); ++i) {
        if (vectorDePunterosNoticia[i]->titulo == titulo) {
            delete vectorDePunterosNoticia[i];
            vectorDePunterosNoticia.erase(vectorDePunterosNoticia.begin() + i);
        }
    }
    for (size_t i = 0; i < vectorDePunterosPelicula.size(); ++i) {
        if (vectorDePunterosPelicula[i]->titulo == titulo) {
            delete vectorDePunterosPelicula[i];
            vectorDePunterosPelicula.erase(vectorDePunterosPelicula.begin() + i);
        }
    }
    for (size_t i = 0; i < vectorDePunterosPodcast.size(); ++i) {
        if (vectorDePunterosPodcast[i]->titulo == titulo) {
            delete vectorDePunterosPodcast[i];
            vectorDePunterosPodcast.erase(vectorDePunterosPodcast.begin() + i);
        }
    }
}

void MaterialOrdenado::buscarMaterial(string material){
    if (material == "libro"){
        for (Libro* objeto : vectorDePunterosLibro){
            objeto->imprimirLibro(objeto->titulo, objeto->grupo, objeto->material, objeto->autor, objeto->editorial, objeto->genero, objeto->estado, objeto->tamano, objeto->precio);
        }
    } else if (material == "noticia"){
        for (Noticia* objeto : vectorDePunterosNoticia){
            objeto->imprimirNoticia(objeto->titulo, objeto->grupo, objeto->material, objeto->autor, objeto->editorial, objeto->genero, objeto->estado, objeto->tamano, objeto->precio);
        }
    } else if (material == "pelicula"){
        for (Pelicula* objeto : vectorDePunterosPelicula){
            objeto->imprimirPelicula(objeto->titulo, objeto->grupo, objeto->material, objeto->autor, objeto->genero, objeto->estado, objeto->tamano, objeto->precio);
        }
    } else {
        for (Podcast* objeto : vectorDePunterosPodcast){
            objeto->imprimirPodcast(objeto->titulo, objeto->grupo, objeto->material, objeto->autor, objeto->genero, objeto->estado, objeto->tamano, objeto->precio);
        }
    }
}

void MaterialOrdenado::buscarTitulo(string titulo){
    for (Libro* objeto : vectorDePunterosLibro){
        if (objeto->titulo == titulo){
            objeto->imprimirLibro(objeto->titulo, objeto->grupo, objeto->material, objeto->autor, objeto->editorial, objeto->genero, objeto->estado, objeto->tamano, objeto->precio);
        }
    for (Noticia* objeto : vectorDePunterosNoticia)
        if (objeto->titulo == titulo){
            objeto->imprimirNoticia(objeto->titulo, objeto->grupo, objeto->material, objeto->autor, objeto->editorial, objeto->genero, objeto->estado, objeto->tamano, objeto->precio);
        }
    }
    for (Pelicula* objeto : vectorDePunterosPelicula){
       if (objeto->titulo == titulo){
           objeto->imprimirPelicula(objeto->titulo, objeto->grupo, objeto->material, objeto->autor, objeto->genero, objeto->estado, objeto->tamano, objeto->precio);
        } 
    }
    for (Podcast* objeto : vectorDePunterosPodcast){
        if (objeto->titulo == titulo){
           objeto->imprimirPodcast(objeto->titulo, objeto->grupo, objeto->material, objeto->autor, objeto->genero, objeto->estado, objeto->tamano, objeto->precio);
        }
    }

    
}