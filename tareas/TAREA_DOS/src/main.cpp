/**
 * @file main.cpp
 * @brief Contiene el ciclo principal del programa, se llaman los métodos necesarios y se implementas otras funciones
 * relacioandas con el menú.
 * @details Este software está sujeto a los términos y condiciones de la Licencia MIT.
 * Entre otras cosas se establece que si se utiliza o distribuye partes sustanciales del
 * programa, se deben incluir el aviso de derechos de autor y el aviso de permiso en tu distribución.
 */
# include "MaterialOrdenado.hpp"
# include "MaterialPrecio.hpp"

/**
 * @brief  Prototipo mostrarMenu().
 */
void mostrarMenu();

/**
 * @brief  Prototipo procesarOpcion().
 */
void procesarOpcion();

MaterialPrecio miPrecio; // Instancia global de la clase MaterialPrecio

/**
 * @brief Función principal del programa.
 * @return Código de retorno.
 */
int main() {
    while(1){  // Bucle principal que se ejecuta indefinidamente
        mostrarMenu(); // Se llama a la función que muestra el menú del programa
        procesarOpcion(); // Se llama a la función que procesa la opción del usuario
    }

    return 0; // Fin del programa con código de retorno 0
}

/**
 * @brief Muestra el menú principal del programa.
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
 */
void procesarOpcion(){
    // Variables para guardar datos de entrada
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
        // LLama al método agregarMaterial()
        miPrecio.agregarMaterial();
        break;

    case 2: 
        // Ignorar el salto de linea del cin
        cin.ignore();
        // Pide el titulo que se desea eliminar
        cout << "Ingrese el título del material que desea eliminar: ";
        std::getline(std::cin, titulo);

        // Pasa el titulo a minusculas ya que se va a comparar
        for (char &c : titulo) {
            c = std::tolower(c);
        }

        // Llama al método eliminarMaterialcon el titulo ingresado como parametro
        miPrecio.eliminarMaterial(titulo);
        break;

    case 3: 
        // Buscar por titulo o por material
        cout << "\n¿Por cual medio desea buscar? (T: Titulo, M: Material)\n";
        cin >> tipo;

        // Pasar la opción a minusculas
        for (char &c : tipo) {
                c = std::tolower(c);
            }
        // Si es m se gestiona buscar por material
        if (tipo == "m"){
            string material;
            cin.ignore();
            // Pide el material
            cout << "Ingrese el material que desea buscar: ";
            std::getline(std::cin, material);
            for (char &c : material) {
                c = std::tolower(c);
            }

            // Llama el método
            miPrecio.buscarMaterial(material);
        // Sini gestiona buscar por titulo
        } else{
            string titulo;
            cin.ignore();
            // Pide el titulo
            cout << "Ingrese el titulo que desea buscar: ";
            std::getline(std::cin, titulo);
            for (char &c : titulo) {
                c = std::tolower(c);
            }
            //Llama el método
            miPrecio.buscarTitulo(titulo);
        }
        break;

    case 4:
        // Lllamar obtener precios 
        precios = miPrecio.obtenerPrecios();
        cout << "\n";
        // Si hay elementos qué ordenar
        if (precios.size() != 0){
            // Pide el orden
            cout << "Ordenar ascendente (A) o descendente (D): ";
            for (char &c : deOrAs) {
                    c = std::tolower(c);
                }
            cin >> deOrAs;
            // Si es a, llama al método con true
            if (deOrAs == "a" || deOrAs == "A" ){
                miPrecio.bubbleSort(precios, true);
            // Si es otro llama al método con false
            } else {
                miPrecio.bubbleSort(precios, false);
            }
        // Sino muestra el mensaje de que está vacio
        } else {
            cout << "No hay elementos que ordenar";
        }
        break;

    
    case 5: 
    // Si se decide terminar el programa se libera la memoria del vector de precios
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
