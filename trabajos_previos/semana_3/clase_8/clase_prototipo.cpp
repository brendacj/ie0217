#include <iostream>
using namespace std;

// Template class con parametros de tipo T, U y V (Si V no se especifica se usa un char)
template <class T, class U, class V = char>
class ClassTemplate {
    private:
        // Definir 3 variables genericas
        T var1;
        U var2;
        V var3;

    public:
        // Constructor, recibe 3 paramtros con los tipos genericos
        // Inicializa los valores de las variables según lo que se mande
        ClassTemplate(T v1, U v2, V v3) : var1(v1), var2(v2), var3(v3){}

        // Imprime los valores de las variables
        void printVar(){
            cout << "var1 = " << var1 << endl;
            cout << "var2 = " << var2 << endl;
            cout << "var3 = " << var3 << endl;
            
        }
    
};

int main(){
    // Instanciar el objeto con tipos int y float (char por defecto)
    ClassTemplate<int, double> obj1(7, 7.7, 'c');
    cout << "obj1 values: " << endl;
    obj1.printVar();

    // Instancia con double, charr y bool, sí especifica el último parametro
    ClassTemplate<double, char, bool> obj2(8.8,'a', false);
    cout << "\nobj2 values: " << endl;
    obj2.printVar();

    return 0;
}