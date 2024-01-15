#include <iostream>
// Se incluye la biblioteca forward_list
#include <forward_list>

using namespace std;

main(){
    // Se crea un forward_list llamado nums
    forward_list<int> nums{1, 2, 3, 4};

    // Se crea un iterador de forward_list de enteros
    // Desde el inicio de nums
    forward_list<int>::iterator itr = nums.begin();

    // Itera mientras no se llegue al final de nums
    while (itr != nums.end()){
        // Acceder al contenido del iterador
        int original_value = *itr;

        // Reescribir el contenido del iterador
        *itr = original_value * 2;

        //Aumentar el iterador
        itr ++;

    }

    // Se imprime nums
    for (int num: nums){
        cout << num << ", ";
    }
    return 0;
}