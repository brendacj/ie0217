#include <iostream> // Para cout
#include <algorithm> // Para sort
#include <vector> // Para vector

// Función que retorna un falso o verdadero
bool myfunction (int i, int j) {return (i<j); }

// Estructura
struct myclass {
    // Operador que retorna un falso o verdadero
    bool operator() (int i, int j){return (i<j);}
} myobject;

int main(){
    // Crea el arreglo myinst
    int myints[] = {32, 71, 12, 45, 26, 80, 53, 33};

    // Crea un vector desde myints a myints+8
    std::vector<int> myvector(myints, myints+8);

    //Usar sort para orednar los primeros 4 elementos
    std::sort (myvector.begin(), myvector.begin()+4);

    // Ordena los ultimos 4 elementos
    std::sort (myvector.begin() + 4, myvector.end(), myfunction);

    // Ordena del inicio al final
    std::sort (myvector.begin(), myvector.end(), myobject);

    // Imprime los valores de los iteradores hasta que llega al final
    std::cout << "myvector contains: ";
    for (std::vector<int>::iterator it=myvector.begin(); it!=myvector.end(); ++it)
        std::cout << " " << *it;
    std::cout << "\n";

    return 0;
}