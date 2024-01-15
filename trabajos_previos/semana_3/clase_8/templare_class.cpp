#include <iostream>

// Clase de tipo template (parametros T)
template <class T>
class Number {
    private:
        // Declara num (tipo T)
        T num;

    public:
    // Constructor: inicializar la variable num
        Number (T n) : num(n){}

        // Método tipo t que retorna num
        T getNum(){
            return num;
        }

};

int main(){
    // Instancia objeto de tipo Number int (T toma el valor de int)
    Number<int> numberInt(7);

    // Instancia pero con double, también se puede por ser clase generica
    Number<double> numberDouble(7.7);

    // Obtiene la variable con ambos tipos e imprimir
    std::cout << "int Number = " << numberInt.getNum() << std::endl;
    std::cout << "double Number = " << numberDouble.getNum() << std::endl;

     return 0;
}