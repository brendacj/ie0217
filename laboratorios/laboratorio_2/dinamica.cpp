#include <iostream>
using namespace std;
// data section (se puede modificar)
int variableGlobal = 10;

// .text
void funcionGlobal(){
    // .data (Se puede modificar)
    // Se hace la asignación solo una vez (estatica)
    static int variableLocalEstatica = 5;

    // stack
    int variableLocal = 20;

    cout << "Variable golbal: " << variableGlobal<< endl;
    cout << "Variable local estatica: " << variableLocalEstatica<< endl;
    cout << "Variable local: " << variableLocal << endl;
}

int main(){
    // stack
    int variableLocalMain = 15;
    funcionGlobal();

    cout << "Variable local en main: " << variableLocalMain<< endl;

    // heap section
    int* variableDinamica = new int;
    *variableDinamica = 25;

    cout << "Variable dinamica: " << *variableDinamica<< endl;
    delete variableDinamica;

    return 0;
}