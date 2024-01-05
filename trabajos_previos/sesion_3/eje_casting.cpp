#include <iostream>
using namespace std;

int main() {
    // Declaro y asigno el valor de num_int
    int num_int = 9;

    // Declaro num_double
    double num_double;

    // Asigno el valor de num_int a num_double
    // Casting implicito
    num_double = num_int;
    
    cout << "num_int = " << num_int << endl;
    cout << "num_double = " << num_double << endl;

    return 0;
}