#include <iostream>
#include <cstdlib>

using namespace std;

//Variables locales
#define MAX 10
int size = 0;

// Estructura
struct strack {
    int items[MAX];
    int top;
};

// Defino un nuevo tipo llamado st que es un Struct strack
typedef struct strack st;

//Crea una pila vacia
void createEmptyStrack(st *s) {
    s->top = -1; //Acepto a top y le pongo un -1 (Está vacia)
}

//Reviso si está llena
int isfull(st *s){
    if (s->top == MAX -1) // Está llena?
        return 1;
    else
        return 0;
}

int isempty(st *s){
    if (s->top == -1) // Está vácia?
        return 1;
    else
        return 0;
}

//Push: Si no está llena se aumenta el top y se agrega el elemento a items
void push(st *s, int newitem) {
    if (isfull(s)){
        cout << "STRAK FULL";
    }else{
        s->top++;
        s->items[s->top] = newitem;
    }
    size++; //Aumenta el tamaño
}

// Pop: Sacar un elemento si la pila no está vacia
void pop(st *s){
    if (isempty(s)){
        cout << "\n STRACK EMPTY \n";
    }else{
        cout << "Item popped= " << s->items[s->top];
        s->top--;
    }
    size--; //Disminuir el tamaño
    cout << endl;
}

// Este imprime los elementos de items
void printStrack(st *s) {
    printf("Strack: ");
    for (int i = 0; i < size; i++){
        cout << s->items[i] << " ";
    }
    cout << endl;
}

// main
int main(){
    int ch;
    // Asigno posición de memoria
    st *s = (st *)malloc(sizeof(st));

    // Crea la pila
    createEmptyStrack(s);

    //Mete los valores a la pila
    push(s, 1);
    push(s, 2);
    push(s, 3);
    push(s, 4);

    // Imprime
    printStrack(s);

    //Saca el de más afuera
    pop(s);

    // Imprime después de sacar el de más afuera
    cout << "\nAfter popping out\n";
    printStrack(s);
}