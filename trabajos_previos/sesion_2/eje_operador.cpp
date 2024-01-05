# include <iostream>
int main () {
    // Declaro e inicializo var1
    int var1 = 0;
    // Declaro var2
    int var2;
    // Si var1 es 0, se inicializa var2 en 15, sino se inizializa en 27
    var2 = (var1 == 0) ? 15 : 27;
    // Como var1 == 0, var2 es 15, pero si la condición fuera var1 == otro número
    // el valor de var2 sería 27
    std::cout <<"var2: \n" << var2 << ""; // Imprime el valor de var2

    return 0;
}