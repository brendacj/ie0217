# include "MaterialOrdenado.hpp"

MaterialOrdenado::MaterialOrdenado() {
    vectorDePunterosLibro = {};
    vectorDePunterosNoticia = {};
    vectorDePunterosPelicula = {};
    vectorDePunterosPodcast = {};
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

void MaterialOrdenado::eliminarMaterial(){
    cout << "Eliminar";
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