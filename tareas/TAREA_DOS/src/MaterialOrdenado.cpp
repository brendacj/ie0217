/**
 * @file MaterialOrdenado.cpp
 * @brief Contiene la implementación de los métodos de la clase MaterialOrdenado.
 * 
 * La clase `MaterialOrdenado` gestiona la adición, eliminación, búsqueda y visualización
 * de materiales de diferentes tipos (libros, noticias, películas, podcasts) almacenados
 * en vectores de punteros. 
 * 
 * @details Este software está sujeto a los términos y condiciones de la Licencia MIT.
 * Entre otras cosas, se establece que si se utiliza o distribuye partes sustanciales del
 * programa, se deben incluir el aviso de derechos de autor y el aviso de permiso en tu distribución.
 */
# include "MaterialOrdenado.hpp"

/**
 * @brief Constructor por defecto de la clase MaterialOrdenado.
 * 
 * Inicializa los vectores de punteros para almacenar los diferentes tipos de materiales 
 * (libros, noticias, películas, podcasts) como vectores vacíos.
 */
MaterialOrdenado::MaterialOrdenado() {
    vectorDePunterosLibro = {};
    vectorDePunterosNoticia = {};
    vectorDePunterosPelicula = {};
    vectorDePunterosPodcast = {};
}

/**
 * @brief Destructor de la clase MaterialOrdenado.
 * 
 * Este destructor libera la memoria de cada objeto almacenado en los vectores de punteros,
 * eliminando dinámicamente los objetos de tipo Libro, Noticia, Pelicula y Podcast.
 * 
 * Recorre cada vector y llama a `delete` para liberar la memoria de los objetos.
 */
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

/**
 * @brief Método para agregar un nuevo material.
 * 
 * Solicita al usuario los datos necesarios para crear un nuevo objeto de tipo 
 * Libro, Noticia, Pelicula o Podcast, dependiendo del tipo de material que se ingrese.
 * El objeto creado se agrega al vector correspondiente utilizando punteros dinámicos.
 */
void MaterialOrdenado::agregarMaterial(){
    // Declaración de las variables para guardar los datos del material
    string titulo, grupo, material, autor, editorial, genero, estado;
    int cantiHojas;
    double precio;

    // Ignora el salto de línea del getline
    cin.ignore();

    // Solicitar al usuario los datos comunes para crear un material
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

    // Datos específicos para cada tipo de material
    if (material == "libro") {
        cout << "Ingrese la editorial: " << endl;
        std::getline(std::cin, editorial);
        cout << "Ingrese la cantidad de hojas: " << endl;
        cin >> cantiHojas;
        cout << "Ingrese el precio: " << endl;
        cin >> precio;

        // Agregar un nuevo objeto de tipo Libro al vector
        vectorDePunterosLibro.push_back(new Libro(titulo, grupo, material, autor, editorial, genero, estado, cantiHojas, precio));

    } else if (material == "noticia") {
        cout << "Ingrese la editorial: " << endl;
        std::getline(std::cin, editorial);
        cout << "Ingrese la cantidad de hojas: " << endl;
        cin >> cantiHojas;
        cout << "Ingrese el precio: " << endl;
        cin >> precio;

        // Agregar un nuevo objeto de tipo Noticia al vector
        vectorDePunterosNoticia.push_back(new Noticia(titulo, grupo, material, autor, editorial, genero, estado, cantiHojas, precio));

    } else if (material == "pelicula") {
        cout << "Ingrese la duracion en minutos: " << endl;
        cin >> cantiHojas;
        cout << "Ingrese el precio: " << endl;
        cin >> precio;

        // Agregar un nuevo objeto de tipo Pelicula al vector
        vectorDePunterosPelicula.push_back(new Pelicula(titulo, grupo, material, autor, genero, estado, cantiHojas, precio));

    } else {
        cout << "Ingrese la duracion en minutos: " << endl;
        cin >> cantiHojas;
        cout << "Ingrese el precio: " << endl;
        cin >> precio;

        // Agregar un nuevo objeto de tipo Podcast al vector
        vectorDePunterosPodcast.push_back(new Podcast(titulo, grupo, material, autor, genero, estado, cantiHojas, precio));
    }
    cout << "El material fue agregado con éxito";
}

/**
 * @brief Método para eliminar un material.
 * 
 * Busca el material con el título proporcionado y lo elimina de los vectores 
 * correspondientes. Libera la memoria de los objetos eliminados.
 * 
 * @param titulo Título del material que se desea eliminar.
 */
void MaterialOrdenado::eliminarMaterial(string titulo){
    // Recorre y elimina el material del vector de libros
    for (size_t i = 0; i < vectorDePunterosLibro.size(); ++i) {
        if (vectorDePunterosLibro[i]->titulo == titulo) {
            delete vectorDePunterosLibro[i];
            vectorDePunterosLibro.erase(vectorDePunterosLibro.begin() + i);
        }
    }

    // Recorre y elimina el material del vector de noticias
    for (size_t i = 0; i < vectorDePunterosNoticia.size(); ++i) {
        if (vectorDePunterosNoticia[i]->titulo == titulo) {
            delete vectorDePunterosNoticia[i];
            vectorDePunterosNoticia.erase(vectorDePunterosNoticia.begin() + i);
        }
    }

    // Recorre y elimina el material del vector de películas
    for (size_t i = 0; i < vectorDePunterosPelicula.size(); ++i) {
        if (vectorDePunterosPelicula[i]->titulo == titulo) {
            delete vectorDePunterosPelicula[i];
            vectorDePunterosPelicula.erase(vectorDePunterosPelicula.begin() + i);
        }
    }

    // Recorre y elimina el material del vector de podcasts
    for (size_t i = 0; i < vectorDePunterosPodcast.size(); ++i) {
        if (vectorDePunterosPodcast[i]->titulo == titulo) {
            delete vectorDePunterosPodcast[i];
            vectorDePunterosPodcast.erase(vectorDePunterosPodcast.begin() + i);
        }
    }
    cout << "El material fue eliminado con éxito";
}

/**
 * @brief Método para buscar materiales por tipo.
 * 
 * Muestra todos los materiales del tipo especificado (libro, noticia, película, podcast).
 * 
 * @param material Tipo de material a buscar ("libro", "noticia", "pelicula", "podcast").
 */
void MaterialOrdenado::buscarMaterial(string material){
    // Buscar materiales por tipo y mostrar su información
    if (material == "libro") {
        for (Libro* objeto : vectorDePunterosLibro) {
            objeto->imprimirLibro(objeto->titulo, objeto->grupo, objeto->material, objeto->autor, objeto->editorial, objeto->genero, objeto->estado, objeto->tamano, objeto->precio);
        }
    } else if (material == "noticia") {
        for (Noticia* objeto : vectorDePunterosNoticia) {
            objeto->imprimirNoticia(objeto->titulo, objeto->grupo, objeto->material, objeto->autor, objeto->editorial, objeto->genero, objeto->estado, objeto->tamano, objeto->precio);
        }
    } else if (material == "pelicula") {
        for (Pelicula* objeto : vectorDePunterosPelicula) {
            objeto->imprimirPelicula(objeto->titulo, objeto->grupo, objeto->material, objeto->autor, objeto->genero, objeto->estado, objeto->tamano, objeto->precio);
        }
    } else {
        for (Podcast* objeto : vectorDePunterosPodcast) {
            objeto->imprimirPodcast(objeto->titulo, objeto->grupo, objeto->material, objeto->autor, objeto->genero, objeto->estado, objeto->tamano, objeto->precio);
        }
    }
}

/**
 * @brief Método para buscar un material por su título.
 * 
 * Busca un material con el título especificado en todos los vectores y muestra su información.
 * 
 * @param titulo Título del material a buscar.
 */
void MaterialOrdenado::buscarTitulo(string titulo){
    // Buscar y mostrar el material en los vectores por título
    for (Libro* objeto : vectorDePunterosLibro) {
        if (objeto->titulo == titulo) {
            objeto->imprimirLibro(objeto->titulo, objeto->grupo, objeto->material, objeto->autor, objeto->editorial, objeto->genero, objeto->estado, objeto->tamano, objeto->precio);
        }
    }

    for (Noticia* objeto : vectorDePunterosNoticia) {
        if (objeto->titulo == titulo) {
            objeto->imprimirNoticia(objeto->titulo, objeto->grupo, objeto->material, objeto->autor, objeto->editorial, objeto->genero, objeto->estado, objeto->tamano, objeto->precio);
        }
    }

    for (Pelicula* objeto : vectorDePunterosPelicula) {
        if (objeto->titulo == titulo) {
            objeto->imprimirPelicula(objeto->titulo, objeto->grupo, objeto->material, objeto->autor, objeto->genero, objeto->estado, objeto->tamano, objeto->precio);
        }
    }

    for (Podcast* objeto : vectorDePunterosPodcast) {
        if (objeto->titulo == titulo) {
            objeto->imprimirPodcast(objeto->titulo, objeto->grupo, objeto->material, objeto->autor, objeto->genero, objeto->estado, objeto->tamano, objeto->precio);
        }
    }
}
