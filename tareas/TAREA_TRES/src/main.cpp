/**
 * @file main.cpp
 * @brief Contiene la lógica principal del programa así como el menú
 * @details Este software está sujeto a los términos y condiciones de la Licencia MIT.
 * Entre otras cosas se establece que si se utiliza o distribuye partes sustanciales del
 * programa, se deben incluir el aviso de derechos de autor y el aviso de permiso en tu distribución.
 */
#include "Matriz.hpp"
#include <complex>
#include "OperacionesBasicas.hpp"
#include "OperacionCompleja.hpp"
#include "Imprimir.hpp"

/// @brief Prototipos de las funciones 
void tipoDeDato();
void opcionDato();
char operacionVerificar();


/**
 * @brief Función principal que guía al usuario a través de la selección de tipos de datos y operaciones con matrices.
 * 
 * @return Código de retorno del programa.
 */
int main() {
    /// Llamada a las funciones tipoDeDato y opcionDato
    tipoDeDato();
    opcionDato();

    return 0; // Fin del programa con código de retorno 0
}

/**
 * @brief Muestra las opciones de tipos de datos para las matrices.
 */
void tipoDeDato(){
    std::cout << "\n --- Operaciones con matriciales: Tipos de datos para la matriz ---\n";
    std::cout << " 1.Matriz de enteros\n";
    std::cout << " 2.Matriz de flotantes\n";
    std::cout << " 3.Matriz compleja\n";
}

/**
 * @brief Lee la opción de tipo de datos seleccionada y realiza operaciones con matrices de ese tipo.
 */
void opcionDato(){
    int opcionDato;
    try{
        std::cout << "Ingrese una opción: ";
        std::cin  >> opcionDato;
        /// Verifica que la opción sea valida
        if (std::cin.fail() || (opcionDato != 1 && opcionDato != 2 && opcionDato != 3) ){
            throw std::runtime_error("No es una opción válida");
        }

    }catch (const std::exception& e){
        /// Maneja el error lanzado
        std::cerr << "Error: " << e.what() << std::endl;
        exit(EXIT_FAILURE);
    }

    /// Si la opción es uno se implementa la lógica con el tipo entero
    if (opcionDato == 1){
        /// Crea tres objetos de tipo int para realizar la operación
        OperacionesBasicas<int> matriz1(1, 2);
        OperacionesBasicas<int> matriz2(1, 2);
        OperacionesBasicas<int> resultado(1, 2);

        /// Pide los datos de ambas matrices
        std::cout << "Datos primera matriz" << std::endl;
        matriz1.tamYDatos();
        std::cout << "Primera matriz" << std::endl;
        Imprimir<int>::ImprimirMatriz(matriz1, 1);

        std::cout << "Datos segunda matriz" << std::endl;
        matriz2.tamYDatos();
        std::cout << "Segunda matriz" << std::endl;
        Imprimir<int>::ImprimirMatriz(matriz2, 1);

        /// Pide y verifica la opción de la operación con operacionVerificar()
        char operacion = operacionVerificar();

        /// Suma e impresión del resultado
        if (operacion == '+'){
            resultado = matriz1 + matriz2;
            std::cout << "Resultado de la suma" << std::endl;
            Imprimir<int>::ImprimirMatriz(resultado, 1);
        }
        /// Resta e impresión del resultado
        else if (operacion == '-'){
            resultado = matriz1 - matriz2;
            std::cout << "Resultado de la resta" << std::endl;
            Imprimir<int>::ImprimirMatriz(resultado, 1);
        }
        else{
            /// Multiplicación e impresión del resultado
            resultado = matriz1 * matriz2;
            std::cout << "Resultado de la multiplicación" << std::endl;
            Imprimir<int>::ImprimirMatriz(resultado, 1);
        }
    }
    /// Si la opción es dos se implementa la lógica con el tipo flotante
    else if(opcionDato == 2){
        
        /// Crea tres objetos de tipo float para realizar la operación
        OperacionesBasicas<float> matriz1(1, 2);
        OperacionesBasicas<float> matriz2(1, 2);
        OperacionesBasicas<float> resultado(1, 2);

        /// Pide los datos de ambas matrices
        std::cout << "Datos primera matriz" << std::endl;
        matriz1.tamYDatos();
        std::cout << "Primera matriz" << std::endl;
        Imprimir<float>::ImprimirMatriz(matriz1, 1);

        std::cout << "Datos segunda matriz" << std::endl;
        matriz2.tamYDatos();
        std::cout << "Segunda matriz" << std::endl;
        Imprimir<float>::ImprimirMatriz(matriz2, 1);

        /// Pide y verifica la opción de la operación con operacionVerificar()
        char operacion = operacionVerificar();

        if (operacion == '+'){
            /// Suma e impresión del resultado
            resultado = matriz1 + matriz2;
            std::cout << "Resultado de la suma" << std::endl;
            Imprimir<float>::ImprimirMatriz(resultado, 1);
        }
        else if (operacion == '-'){
            /// Resta e impresión del resultado
            std::cout << "Resultado de la resta" << std::endl;
            resultado = matriz1 - matriz2;
            Imprimir<float>::ImprimirMatriz(resultado, 1);
        }
        else{
            /// Multiplicación e impresión del resultado
            resultado = matriz1 * matriz2;
            std::cout << "Resultado de la multiplicación" << std::endl;
            Imprimir<float>::ImprimirMatriz(resultado, 1);
        }

    }
    /// Si la opción es dos se implementa la lógica con el tipo complex<float>
    else if(opcionDato == 3){

        /// Crea tres objetos de tipo complex<float> para realizar la operación
        OperacionesBasicas<std::complex<float>> matriz1(1, 2);
        OperacionesBasicas<std::complex<float>> matriz2(1, 2);
        OperacionesBasicas<std::complex<float>> resultado(1, 2);

        /// Pide los datos de ambas matrices
        std::cout << "Datos primera matriz" << std::endl;
        matriz1.tamYDatos();
        std::cout << "Primera matriz" << std::endl;
        Imprimir<std::complex<float>>::ImprimirMatriz(matriz1, 2);

        std::cout << "Datos segunda matriz" << std::endl;
        matriz2.tamYDatos();
        std::cout << "Segunda matriz" << std::endl;
        Imprimir<std::complex<float>>::ImprimirMatriz(matriz2, 2);

        /// Pide y verifica la opción de la operación con operacionVerificar()
       char operacion = operacionVerificar();

        /// Suma e impresión del resultado
        if (operacion == '+'){
            resultado = matriz1 + matriz2;
            std::cout << "Resultado de la suma" << std::endl;
            Imprimir<std::complex<float>>::ImprimirMatriz(resultado, 2);
        }
        /// Resta e impresión del resultado
        else if (operacion == '-'){
            std::cout << "Resultado de la resta" << std::endl;
            resultado = matriz1 - matriz2;
            Imprimir<std::complex<float>>::ImprimirMatriz(resultado, 2);
        }
        else{
            /// Multiplicación e impresión del resultado
            resultado = matriz1 * matriz2;
            std::cout << "Resultado de la multiplicación" << std::endl;
            Imprimir<std::complex<float>>::ImprimirMatriz(resultado, 2);
        }

    }
}

/**
 * @brief Pide y verifica la operación seleccionada (+, -, *) y la devuelve.
 * 
 * @return Caracter de la operación seleccionada.
 */
char operacionVerificar(){
    char operacion;
    try{
        std::cout << "Ingrese la operación que desea realizar (+, -, *): ";
        std::cin >> operacion;
        if (std::cin.fail() || (operacion != '+' && operacion != '-' && operacion != '*') ){
            throw std::runtime_error("No es una operación valida");
        }
    }
    catch (const std::exception& e){
        std::cerr << "Error: " << e.what() << std::endl;
        exit(EXIT_FAILURE);
    }
    return operacion;
}