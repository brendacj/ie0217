/**
 * @file MaterialOrdenado.cpp
 * @brief Contiene la implementación de los métodos de la clase MaterialOrdenado
 * @details Este software está sujeto a los términos y condiciones de la Licencia MIT.
 * Entre otras cosas se establece que si se utiliza o distribuye partes sustanciales del
 * programa, se deben incluir el aviso de derechos de autor y el aviso de permiso en tu distribución.
 */
# include "MaterialOrdenado.hpp"

/**
     * @brief Constructor por defecto de la clase MaterialOrdenado.
     * Inicializa los atributos
     */
MaterialOrdenado::MaterialOrdenado() {
    vectorDePunterosLibro = {};
    vectorDePunterosNoticia = {};
    vectorDePunterosPelicula = {};
    vectorDePunterosPodcast = {};
}

/**
     * @brief Destructor de la clase MaterialOrdenado.
     */
MaterialOrdenado::~MaterialOrdenado() {
    // Liberar memoria para cada objeto en vectorDePunterosLibro
    // Recorre todo el vector y va eliminando sus objetos
    for (Libro* objeto : vectorDePunterosLibro) {
        delete objeto;
    }

    // Liberar memoria para cada objeto en vectorDePunterosNoticia
    // Recorre todo el vector y va eliminando sus objetos
    for (Noticia* objeto : vectorDePunterosNoticia) {
        delete objeto;
    }

    // Liberar memoria para cada objeto en vectorDePunterosPelicula
    // Recorre todo el vector y va eliminando sus objetos
    for (Pelicula* objeto : vectorDePunterosPelicula) {
        delete objeto;
    }

    // Liberar memoria para cada objeto en vectorDePunterosPodcast
    // Recorre todo el vector y va eliminando sus objetos
    for (Podcast* objeto : vectorDePunterosPodcast) {
        delete objeto;
    }
}

/**
     * @brief Método agregar material.
     */
void MaterialOrdenado::agregarMaterial(){
    // Declaración de las variables para guardar datos
    string titulo, grupo, material, autor, editorial, genero, estado;
    int cantiHojas;
    double precio;

    // Ignora el salto de linea del getline
    cin.ignore();

    // Se piden los datos para crear los materiales
    // Primero los atributos comunes, los que tienen todas las clases

    cout << "Ingrese el titulo: " << endl;
    std::getline(std::cin, titulo);

    // Estos atributos tienen que compararse más adelante, por lo que se ponen en minusculas
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
    // Estos atributos tienen que compararse más adelante, por lo que se ponen en minusculas
    std::getline(std::cin, material);
    for (char &c : material) {
        c = std::tolower(c);
    }

    // Datos especificos de la clase Libro
    if (material == "libro"){
        cout << "Ingrese la editorial: " << endl;
        std::getline(std::cin, editorial);

        cout << "Ingrese la cantidad de hojas: " << endl;
        cin >> cantiHojas;

        cout << "Ingrese el precio: " << endl;
        cin >> precio;

        // Se agrega un nuevo objeto de tipo Libro al vector vectorDePunterosLibro dinamicamente con new
        vectorDePunterosLibro.push_back(new Libro(titulo, grupo, material, autor, editorial, genero, estado, cantiHojas, precio));

    // Datos especificos de la clase Noticia 
    } else if (material == "noticia"){
        cout << "Ingrese la editorial: " << endl;
        std::getline(std::cin, editorial);

        cout << "Ingrese la cantidad de hojas: " << endl;
        cin >> cantiHojas;

        cout << "Ingrese el precio: " << endl;
        cin >> precio;

        // Se agrega un nuevo objeto de tipo Noticia al vector vectorDePunterosNoticia dinamicamente con new
        vectorDePunterosNoticia.push_back(new Noticia(titulo, grupo, material, autor, editorial, genero, estado, cantiHojas, precio));

    // Datos especificos de la clase Pelicula
    } else if (material == "pelicula"){

        cout << "Ingrese la duracion en minutos: " << endl;
        cin >> cantiHojas;

        cout << "Ingrese el precio: " << endl;
        cin >> precio;

        // Se agrega un nuevo objeto de tipo Pelicula al vector vectorDePunterosPelicula dinamicamente con new
        vectorDePunterosPelicula.push_back(new Pelicula(titulo, grupo, material, autor, genero, estado, cantiHojas, precio));

    } else{

        // Datos especificos de la clase Podcast
        cout << "Ingrese la duracion en minutos: " << endl;
        cin >> cantiHojas;

        cout << "Ingrese el precio: " << endl;
        cin >> precio;

        // Se agrega un nuevo objeto de tipo Podcast al vector vectorDePunterosPodcast dinamicamente con new
        vectorDePunterosPodcast.push_back(new Podcast(titulo, grupo, material, autor, genero, estado, cantiHojas, precio));

    }
    cout << "El material fue agregado con éxito";
    
}


/**
     * @brief Método eliminar material.
     */
void MaterialOrdenado::eliminarMaterial(string titulo){
    /**
     * Recorre vectorDePunterosLibro, si encuentra en sus elementos
     * un titulo igual al ingresado libera la memeoria
     * del objeto y elimina el elemento del vector
     */
   
    for (size_t i = 0; i < vectorDePunterosLibro.size(); ++i) {
        if (vectorDePunterosLibro[i]->titulo == titulo) {
            delete vectorDePunterosLibro[i];
            vectorDePunterosLibro.erase(vectorDePunterosLibro.begin() + i);
        }
    }
    /**
     * Recorre vectorDePunterosNoticia, si encuentra en sus elementos
     * un titulo igual al ingresado libera la memeoria
     * del objeto y elimina el elemento del vector
     */
    for (size_t i = 0; i < vectorDePunterosNoticia.size(); ++i) {
        if (vectorDePunterosNoticia[i]->titulo == titulo) {
            delete vectorDePunterosNoticia[i];
            vectorDePunterosNoticia.erase(vectorDePunterosNoticia.begin() + i);
        }
    }
    /**
     * Recorre vectorDePunterosPelicula, si encuentra en sus elementos
     * un titulo igual al ingresado libera la memeoria
     * del objeto y elimina el elemento del vector
     */
    for (size_t i = 0; i < vectorDePunterosPelicula.size(); ++i) {
        if (vectorDePunterosPelicula[i]->titulo == titulo) {
            delete vectorDePunterosPelicula[i];
            vectorDePunterosPelicula.erase(vectorDePunterosPelicula.begin() + i);
        }
    }
    /**
     * Recorre vectorDePunterosPodcast, si encuentra en sus elementos
     * un titulo igual al ingresado libera la memeoria
     * del objeto y elimina el elemento del vector
     */
    for (size_t i = 0; i < vectorDePunterosPodcast.size(); ++i) {
        if (vectorDePunterosPodcast[i]->titulo == titulo) {
            delete vectorDePunterosPodcast[i];
            vectorDePunterosPodcast.erase(vectorDePunterosPodcast.begin() + i);
        }
    }
    cout << "El material fue eliminado con éxito";
}

/**
     * @brief Método buscar por material.
     */
void MaterialOrdenado::buscarMaterial(string material){
     /**
     * Si el material ingresado es igual a libro, se imprime la información de
     * todos los objetos de vectorDePunterosLibro
     */
    if (material == "libro"){
        for (Libro* objeto : vectorDePunterosLibro){
            objeto->imprimirLibro(objeto->titulo, objeto->grupo, objeto->material, objeto->autor, objeto->editorial, objeto->genero, objeto->estado, objeto->tamano, objeto->precio);
        }
    /**
     * Si el material ingresado es igual a noticia, se imprime la información de
     * todos los objetos de vectorDePunterosNoticia
     */
    } else if (material == "noticia"){
        for (Noticia* objeto : vectorDePunterosNoticia){
            objeto->imprimirNoticia(objeto->titulo, objeto->grupo, objeto->material, objeto->autor, objeto->editorial, objeto->genero, objeto->estado, objeto->tamano, objeto->precio);
        }

    /**
     * Si el material ingresado es igual a pelicula, se imprime la información de
     * todos los objetos de vectorDePunterosPelicula
     */
    } else if (material == "pelicula"){
        for (Pelicula* objeto : vectorDePunterosPelicula){
            objeto->imprimirPelicula(objeto->titulo, objeto->grupo, objeto->material, objeto->autor, objeto->genero, objeto->estado, objeto->tamano, objeto->precio);
        }

    /**
     * Si el material ingresado no es ninguno de los anteriores, se imprime la
     * información de todos los objetos de vectorDePunterosPodcast
     */
    } else {
        for (Podcast* objeto : vectorDePunterosPodcast){
            objeto->imprimirPodcast(objeto->titulo, objeto->grupo, objeto->material, objeto->autor, objeto->genero, objeto->estado, objeto->tamano, objeto->precio);
        }
    }
}

/**
     * @brief Método Buscar por titulo.
     */
void MaterialOrdenado::buscarTitulo(string titulo){
    /**
     * Recorre vectorDePunterosLibro, si encuentra en sus elementos
     * un titulo igual al ingresado imprime la información del objeto actual
     */
    for (Libro* objeto : vectorDePunterosLibro){
        if (objeto->titulo == titulo){
            objeto->imprimirLibro(objeto->titulo, objeto->grupo, objeto->material, objeto->autor, objeto->editorial, objeto->genero, objeto->estado, objeto->tamano, objeto->precio);
        }
    }
    /**
     * Recorre vectorDePunterosNoticia, si encuentra en sus elementos
     * un titulo igual al ingresado imprime la información del objeto actual
     */
    for (Noticia* objeto : vectorDePunterosNoticia){
        if (objeto->titulo == titulo){
            objeto->imprimirNoticia(objeto->titulo, objeto->grupo, objeto->material, objeto->autor, objeto->editorial, objeto->genero, objeto->estado, objeto->tamano, objeto->precio);
        }
    }
    /**
     * Recorre vectorDePunterosPelicula, si encuentra en sus elementos
     * un titulo igual al ingresado imprime la información del objeto actual
     */
    for (Pelicula* objeto : vectorDePunterosPelicula){
       if (objeto->titulo == titulo){
           objeto->imprimirPelicula(objeto->titulo, objeto->grupo, objeto->material, objeto->autor, objeto->genero, objeto->estado, objeto->tamano, objeto->precio);
        } 
    }
    /**
     * Recorre vectorDePunterosPodcast, si encuentra en sus elementos
     * un titulo igual al ingresado imprime la información del objeto actual
     */
    for (Podcast* objeto : vectorDePunterosPodcast){
        if (objeto->titulo == titulo){
           objeto->imprimirPodcast(objeto->titulo, objeto->grupo, objeto->material, objeto->autor, objeto->genero, objeto->estado, objeto->tamano, objeto->precio);
        }
    }

    
}