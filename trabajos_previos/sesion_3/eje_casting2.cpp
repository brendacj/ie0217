#include <iostream>
using namespace std;

int main() {
    double num_double = 3.56; // Declaro una variable float
    cout << "num_double = " << num_double << endl;

    // Establezco el valor de num_int1 con el float con asting
    int num_int1 = (int)num_double; // Puedo hacer un casting explicito así
    cout << "num_int1 = " << num_int1 << endl;

    int num_int2 = int(num_double); // O así
    cout << "num_int2 = " << num_int2 << endl;
    
    return 0;
}