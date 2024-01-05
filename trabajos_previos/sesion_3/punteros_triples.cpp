#include <iostream>
using namespace std;

int main (){
 
    // Declaro e inicializo la variable var
    int var = 2050;
    // declaro ptr_var
    int* ptr_var;

    // inicializo ptr_var
    ptr_var = &var;

    // Imprimo valores de var y ptr_var
    cout << "var: " << var << ", ptr_var: " << ptr_var << endl;

    // declaro ptr_ptr_var
    int** ptr_ptr_var;

    // Inicializo ptr_ptr_var
    ptr_ptr_var = &ptr_var;

    // Imprimo ptr_ptr_var
    cout << "ptr_ptr_var: " << ptr_ptr_var << endl;
    // Imprimo la dirección de ptr_var
    cout << "&ptr_var: " << &ptr_var << endl;

    // Imprimo la dirección de ptr_ptr_var
    cout << "&ptr_ptr_var: " << &ptr_ptr_var << endl;

    return 0;
}
