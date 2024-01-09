# include <iostream>
using namespace std;

int main (int argc, char* argv[]) {
    // Numero de argumentos digitados al ejecutar el programa más 1
     cout << "Numero de argumentos:  " << argc << endl;
     cout << "Nombre del programa: " << argv [0] << endl; // El argumento 0 es el nombre del programa

     if (argc > 1) {
        cout << "Argumentos adicionales: " << endl;
        // Imprime todos los demás argumentos
        for (int i = 1; i < argc; ++i) {
            cout << "argv [" << i << "]: " << argv[i] << endl;
        }
     }
    
    return 0;
}