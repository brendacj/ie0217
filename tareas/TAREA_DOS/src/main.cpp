/**
 * @file main.cpp
 * @brief Contiene el ciclo principal del programa. Aquí se llaman los métodos necesarios 
 * y se implementan otras funciones relacionadas con el menú interactivo.
 * 
 * Este archivo gestiona el flujo del programa, mostrando un menú y permitiendo al usuario 
 * interactuar con el sistema para agregar, eliminar, buscar, ordenar materiales, etc.
 * 
 * @details Este software está sujeto a los términos y condiciones de la Licencia MIT.
 * Entre otras cosas, se establece que si se utiliza o distribuye partes sustanciales del
 * programa, se deben incluir el aviso de derechos de autor y el aviso de permiso en tu distribución.
 */
# include "MaterialOrdenado.hpp"
# include "MaterialPrecio.hpp"

/**
 * @brief Prototipo de la función mostrarMenu().
 * 
 * Muestra las opciones del menú principal al usuario.
 */
void mostrarMenu();

/**
 * @brief Prototipo de la función procesarOpcion().
 * 
 * Procesa la opción seleccionada por el usuario en el menú.
 */
void procesarOpcion();

MaterialPrecio miPrecio; // Instancia global de la clase MaterialPrecio

/**
 * @brief Función principal del programa.
 * 
 * Este es el ciclo principal del programa, que ejecuta indefinidamente el menú y procesa
 * las opciones del usuario hasta que decide salir. 
 * 
 * @return Código de retorno del programa (0).
 */
int main() {
    while(1){  // Bucle principal que se ejecuta indefinidamente hasta que el usuario decide salir
        mostrarMenu(); // Muestra el menú de opciones
        procesarOpcion(); // Procesa la opción seleccionada por el usuario
    }

    return 0; // Fin del programa con código de retorno 0
}

/**
 * @brief Muestra el menú principal del programa.
 * 
 * Esta función imprime las opciones disponibles para el usuario, permitiéndole elegir
 * entre agregar, eliminar, buscar, ordenar o salir del programa.
 */
void mostrarMenu() {
    // Mensajes de bienvenida y opciones disponibles
    std::cout << "\n --- Inventario Biblioteca ---\n";
    std::cout << " 1.Agregar Material\n";
    std::cout << " 2.Eliminar Material\n";
    std::cout << " 3.Buscar Material\n";
    std::cout << " 4.Ordenar Materiales\n";
    std::cout << " 5.Salir\n";
}

/**
 * @brief Procesa la opción ingresada por el usuario.
 * 
 * Según la opción seleccionada, esta función llama a los métodos correspondientes para
 * agregar, eliminar, buscar, ordenar o salir del programa. 
 * Se encarga de gestionar la entrada del usuario y manejar las operaciones relacionadas.
 */
void procesarOpcion(){
    // Variables para almacenar los datos de entrada del usuario
    int opcion;
    string titulo;
    string tipo;
    std::vector<double*> precios;
    string deOrAs;

    // Solicitar al usuario que ingrese una opción
    std::cout << "\nIngrese una opcion: ";
    std::cin >> opcion;

    switch (opcion)
    {
    case 1: 
        // Llama al método agregarMaterial() para agregar un nuevo material
        miPrecio.agregarMaterial();
        break;

    case 2: 
        // Ignora el salto de línea de la entrada anterior
        cin.ignore();
        // Solicita el título del material que se desea eliminar
        cout << "Ingrese el título del material que desea eliminar: ";
        std::getline(std::cin, titulo);

        // Convierte el título a minúsculas para una comparación insensible a mayúsculas/minúsculas
        for (char &c : titulo) {
            c = std::tolower(c);
        }

        // Llama al método eliminarMaterial() con el título proporcionado
        miPrecio.eliminarMaterial(titulo);
        break;

    case 3: 
        // Permite al usuario buscar por título o material
        cout << "\n¿Desea buscar por Título (T) o por Material (M)?\n";
        cin >> tipo;

        // Convierte la opción de búsqueda a minúsculas
        for (char &c : tipo) {
                c = std::tolower(c);
            }
        // Si se selecciona "m", busca por material
        if (tipo == "m"){
            string material;
            cin.ignore();
            // Solicita el material que se desea buscar
            cout << "Ingrese el material que desea buscar: ";
            std::getline(std::cin, material);
            for (char &c : material) {
                c = std::tolower(c);
            }

            // Llama al método buscarMaterial() con el material ingresado
            miPrecio.buscarMaterial(material);
        // Si se selecciona otra opción, busca por título
        } else{
            string titulo;
            cin.ignore();
            // Solicita el título que se desea buscar
            cout << "Ingrese el título que desea buscar: ";
            std::getline(std::cin, titulo);
            for (char &c : titulo) {
                c = std::tolower(c);
            }
            // Llama al método buscarTitulo() con el título proporcionado
            miPrecio.buscarTitulo(titulo);
        }
        break;

    case 4:
        // Llama al método obtenerPrecios() para obtener los precios
        precios = miPrecio.obtenerPrecios();
        cout << "\n";
        // Si hay elementos para ordenar
        if (precios.size() != 0){
            // Solicita el tipo de orden (ascendente o descendente)
            cout << "Ordenar ascendente (A) o descendente (D): ";
            for (char &c : deOrAs) {
                    c = std::tolower(c);
                }
            cin >> deOrAs;
            // Si la opción es "A", llama al método de ordenación ascendente
            if (deOrAs == "a" || deOrAs == "A" ){
                miPrecio.bubbleSort(precios, true);
            // Si es otra opción, llama al método de ordenación descendente
            } else {
                miPrecio.bubbleSort(precios, false);
            }
        // Si no hay elementos, muestra un mensaje
        } else {
            cout << "No hay elementos que ordenar";
        }
        break;

    
    case 5: 
        // Si el usuario elige salir, libera la memoria de los punteros en el vector de precios
        for (double* precio : precios) {
            delete precio;
        }
        // Muestra un mensaje de salida y termina el programa
        std::cout << "\nSaliendo del programa...\n";
        exit(0);
    
    default:
        // Si la opción ingresada es inválida, muestra un mensaje de error
        std::cout << "\nOpción inválida\n";
    }
}

