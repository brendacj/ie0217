# include "MaterialOrdenado.hpp"

MaterialOrdenado::MaterialOrdenado() {
    // No hay ninguna inicialización específica en este momento
}

void MaterialOrdenado::agregarMaterial(){
    string titulo, grupo, material, autor, editorial, genero, estado;
    int cantiHojas;
    double precio;

    cout << "Ingrese el titulo: " << endl;
    cin >> titulo;

    cout << "Ingrese el autor: " << endl;
    cin >> autor;

    cout << "Ingrese el genero: " << endl;
    cin >> genero;

    cout << "Ingrese el estado: " << endl;
    cin >> estado;

    cout << "Ingrese el precio: " << endl;
    cin >> precio;

    cout << "Ingrese el grupo: " << endl;
    cin >> grupo;

    cout << "Ingrese el tipo de material: " << endl;
    cin >> material;

    if (material == "libro"){
        cout << "Ingrese la editorial: " << endl;
        cin >> editorial;

        cout << "Ingrese la cantidad de hojas: " << endl;
        cin >> cantiHojas;

        vectorDePunterosLibro.push_back(new Libro(titulo, grupo, material, autor, editorial, genero, estado, cantiHojas, precio));
        
    } else if (material == "noticia"){
        cout << "Ingrese la editorial: " << endl;
        cin >> editorial;

        cout << "Ingrese la cantidad de hojas: " << endl;
        cin >> cantiHojas;

        vectorDePunterosNoticia.push_back(new Noticia(titulo, grupo, material, autor, editorial, genero, estado, cantiHojas, precio));

    } else if (material == "pelicula"){

        cout << "Ingrese la duracion en minutos: " << endl;
        cin >> cantiHojas;

        vectorDePunterosPelicula.push_back(new Pelicula(titulo, grupo, material, autor, genero, estado, cantiHojas, precio));

    } else{

        cout << "Ingrese la duracion en minutos: " << endl;
        cin >> cantiHojas;

        vectorDePunterosPodcast.push_back(new Podcast(titulo, grupo, material, autor, genero, estado, cantiHojas, precio));

    }
    for (Libro* objeto : vectorDePunterosLibro) {
    cout << objeto->titulo<< " ";
    }
    cout << endl;

    for (Noticia* objeto : vectorDePunterosNoticia) {
    cout << objeto->tamano << " xd ";
    }
    cout << endl;

    for (Pelicula* objeto : vectorDePunterosPelicula) {
    cout << objeto->tamano << " aa ";
    }
    cout << endl;

    for (Podcast* objeto : vectorDePunterosPodcast) {
    cout << objeto->tamano << " si ";
    }
    cout << endl;
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