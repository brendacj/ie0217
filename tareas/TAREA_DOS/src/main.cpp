# include "MaterialOrdenado.hpp"
# include "MaterialPrecio.hpp"

void mostrarMenu();

void procesarOpcion();

MaterialPrecio miPrecio;


int main() {
    while(1){  // Bucle principal que se ejecuta indefinidamente
        mostrarMenu(); // Se llama a la función que muestra el menú del juego
        procesarOpcion(); // Se llama a la función que procesa la opción del usuario
    }

    return 0; // Fin del programa con código de retorno 0
}

void mostrarMenu() {
    // Mensajes de bienvenida y opciones disponibles
    std::cout << "\n --- Inventario Biblioteca ---\n";
    std::cout << " 1.Agregar Material\n";
    std::cout << " 2.Eliminar Material\n";
    std::cout << " 3.Buscar Material\n";
    std::cout << " 4.Ordenar Materiales\n";
    std::cout << " 5.Salir\n";
}

void procesarOpcion(){
    int opcion;
    string titulo;
    string tipo;
    std::vector<double*> precios;
    string deOrAs;
    // Solicitar al usuario que elija una opción
    std::cout << "\nIngrese una opcion: ";
    std::cin >> opcion;

    switch (opcion)
    {
    case 1: 
        // Aqui
        miPrecio.agregarMaterial();
        break;

    case 2: 
        cin.ignore();
        cout << "Ingrese el título del material que desea eliminar: ";
        std::getline(std::cin, titulo);
            for (char &c : titulo) {
                c = std::tolower(c);
            }
        miPrecio.eliminarMaterial(titulo);
        break;

    case 3: 
        cout << "\n¿Por cual medio desea buscar? (T: Titulo, M: Material)\n";
        cin >> tipo;
        for (char &c : tipo) {
                c = std::tolower(c);
            }
        if (tipo == "m"){
            string material;
            cin.ignore();
            cout << "Ingrese el material que desea buscar: ";
            std::getline(std::cin, material);
            for (char &c : material) {
                c = std::tolower(c);
            }
            miPrecio.buscarMaterial(material);
        } else{
            string titulo;
            cin.ignore();
            cout << "Ingrese el titulo que desea buscar: ";
            std::getline(std::cin, titulo);
            for (char &c : titulo) {
                c = std::tolower(c);
            }
            miPrecio.buscarTitulo(titulo);
        }
        break;

    case 4:
        precios = miPrecio.obtenerPrecios();
        cout << "\n";
        if (precios.size() != 0){
                cout << "Ordenar ascendente (A) o descendente (D): ";
            for (char &c : deOrAs) {
                    c = std::tolower(c);
                }
            cin >> deOrAs;
            if (deOrAs == "a"){
                miPrecio.bubbleSort(precios, true);
            } else {
                miPrecio.bubbleSort(precios, false);
            }
        } else {
            cout << "No hay elementos que ordenar";
        }
        break;

    
    case 5: 
        for (double* precio : precios) {
        delete precio;
    }
        // Sale del programa
        std::cout << "\nSaliendo del programa...\n";
        exit(0);
    
    default:
        // Opción invalida
        std::cout << "\nOpcion invalida\n";
    }
}
