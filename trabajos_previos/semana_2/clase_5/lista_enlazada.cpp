#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// Clase nodo
class Node {
    public: // Variables tipo int (valor) y nodo puntero (info)
        int value;
        Node* next;
};

int main(){
    // Crear varios nodos 
    Node* head;
    Node* one = NULL;
    Node* two = NULL;
    Node* three = NULL;

    // Asignar espacios de memoria a los nodos
    one = new Node();
    two = new Node();
    three = new Node();

    // Inicializar los valores
    one->value = 1;
    two->value = 2;
    three->value = 3;

    // Interconectar los nodos
    one->next = two;
    two->next = three;
    three->next = NULL;

    // la cabeza es el 1
    head = one;
    // Aquí se muestran
    while (head != NULL){
        cout << head->value;
        head = head->next;
    }

    return 0;
}