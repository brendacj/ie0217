#include <iostream>
using namespace std;

struct Node{
    // Miembros, variable entero, punteros
    int data;
    struct Node *left, *right;
    Node(int data) {
        this->data = data;
        left = right = NULL; // No tiene hijos por ahora
    }
};

//preorden
void preorderTransversal(struct Node* node){
    if (node == NULL)
    return;

    // Reviza la raiz, los de la izquierda y los de la derecha
    cout << node->data << "->";
    //Recursividad
    preorderTransversal(node->left);
    preorderTransversal(node->right);

}

// post orden: izquierda, derecha, raiz
void postorderTransversal(struct Node* node){
    if (node == NULL)
        return;

    postorderTransversal(node->left);
    postorderTransversal(node->right);
    cout << node->data << "->";
}
// in orden: izquierdo, raiz, derecho
void inorderTransversal(struct Node* node){
    if (node == NULL)
        return;

    inorderTransversal(node->left);
    cout << node->data << "->";
    inorderTransversal(node->right);
}

// Implementación
int main(){
    // Raiz
    struct Node* root = new Node(1);
    // Cada opción
    root->left = new Node(12);
    root->right = new Node(9);
    root->left->left = new Node(5);
    root->left->right = new Node(6);

    // Imprimir los caminos

    cout << "Inorder transversal ";
    inorderTransversal(root);

    cout << "\nPreorder transversal ";
    preorderTransversal(root);

    cout << "\nPostorder transversal ";
    postorderTransversal(root);

}