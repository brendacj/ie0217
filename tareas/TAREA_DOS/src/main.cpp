# include "MaterialOrdenado.hpp"

void mostrarMenu();

void procesarOpcion();

MaterialOrdenado miMaterial; 


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
    string tipo;
    // Solicitar al usuario que elija una opción
    std::cout << "\nIngrese una opcion: ";
    std::cin >> opcion;

    switch (opcion)
    {
    case 1: 
        miMaterial.agregarMaterial();
        break;

    case 2: 
        cout << "Opcion 2";
        break;

    case 3: 
        cout << "\n¿Por cual medio desea buscar? (T: Titulo, M: Material)\n";
        cin >> tipo;
        if (tipo == "M"){
            string material;
            cout << "Ingrese el material que desea buscar: ";
            cin >> material;
            miMaterial.buscarMaterial(material);
        } else{
            string titulo;
            cout << "Ingrese el titulo que desea buscar: ";
            cin >> titulo;
            miMaterial.buscarTitulo(titulo);
        }
        break;

    case 4: 
        // Iniciar juego difícil
        cout << "Opcion 4";
        break;

    
    case 5: 
        // Sale del programa
        std::cout << "\nSaliendo del programa...\n";
        exit(0);
    
    default:
        // Opción invalida
        std::cout << "\nOpcion invalida\n";
    }
}
