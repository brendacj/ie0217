// Función con parametros como valores
void func1 (int numVal) {
    // codigo relacioando con el valor
}

// Función con parametros como referencias
void func2(int &numRef) {
    //codigo relacionado con la referencia
}

int main() {
    int num = 5;
    // Pasa el parametro por valor
    func1(num);
    // Pasa el parametro por referencia
    func2(num);

    return 0;
}