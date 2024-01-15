#include <iostream>

// Función tipo template, se usa un tipo generico T como tipo de los parametros
// T usa el tipo de dato que le pasen
template <typename T>
T add(T num1, T num2){
    return (num1 + num2);
}

int main(){
    // Declaro la variable result1 y result2
    int result1;
    double result2;

    // Aquí llamo la función con enteros
    result1 = add<int>(2,3);
    std::cout << result1 << std::endl;

    // Aquí llamo la función con flotantes
    result2 = add<double>(2.2, 3.3);
    std::cout << result2 << std::endl;

    // Al tener tipo de datos generico puede manejar ambos

    return 0;
}