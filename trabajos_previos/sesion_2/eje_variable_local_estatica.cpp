# include <iostream>
using namespace std;

void test (){
    // Variable que inicia cuando se llama la función por primera vez
    static int var = 0;
    // Al llamar la función por segunda vez salta hasta esta linea
    ++var;
    cout << var << endl;
}

int main (){
    test();
    test();

    return 0;
}