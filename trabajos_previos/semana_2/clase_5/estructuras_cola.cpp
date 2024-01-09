#include <iostream>
#define SIZE 5

using namespace std;

// Clase cola
class Queue {
    private: //Variables privadas
        int items[SIZE], front, rear;

    public:
        Queue(){ // Iniccializa en -1, vacia
            front = -1;
            rear = -1;
        }

        bool isFull(){
            if (front == 0 && rear == SIZE -1){ // Si front está en 0 y el tamaño es -1 está llena
                return true;
            }
            return false;
        }

        bool isEmpty() { // Si front es -1, está vacía
            if (front == -1)
                return true;
            else
                return false;  
        }

        // Si no está llena agregamos un elemento al final
        void enQueue(int element){
            if (isFull()){
                cout << "Queue is full";
            }else{
                if (front == -1) front = 0;
                rear ++; //Se aumenta la posición
                items[rear] = element;
                cout << endl << "Inserted " << element << endl;
            }
        }

        // Eliminar el primer elemento que entró si no está vacía
        int deQueue(){
            int element;
            if (isEmpty()){
                cout << "Queue is empty" << endl;
                return(-1);
            }else{
                element = items[front];
                if (front >= rear){
                    front = -1;
                    rear = -1;
                }else{
                    front++; // Aumenta el frente
                }
                cout << endl
                    << "Deleted -> " << element << endl;
                return(element);
            }
        }

        // Función para mostrar todos los elementos
        void display(){
            int i;
            if (isEmpty()){
                cout << endl
                    << "Empty Queue" << endl;
            }else {
                cout << endl
                    << "Front index-> " << front;
                cout << endl
                    << "Items -> ";
                for (i = front; i <= rear; i ++)
                    cout << items[i] << " ";
                cout << endl
                    << "Rear index ->" << rear << endl;
            }
        }

};

//Manejo

int main(){
    Queue q; //Declarar

    q.deQueue(); // No se puede desencolar porque esta vacía

    // Encolar estas
    q.enQueue(1);
    q.enQueue(2);
    q.enQueue(3);
    q.enQueue(4);
    q.enQueue(5);

    // Ya está llena
    q.enQueue(6);

    //Muestra
    q.display();

    // Quita el primero que entró
    q.deQueue();

    // Muestra
    q.display();
}