# include <iostream>
# include <cstring>
using namespace std;

struct Books {
    // Define las variables englobadas
    char title[50];
    char author[50];
    char subject [100];
    int book_id;
};

int main () {
    // Aquí se usan las variables llamandolas con el operador .
   struct Books Book1;
   struct Books Book2;

   strcpy(Book1.title, "Learn C++ Programing");
   strcpy(Book1.author, "Chand Miyan");
   strcpy(Book1.subject, "C++ Programing");
   Book1.book_id = 6495407;

   strcpy(Book2.title, "Telecom Billing");
   strcpy(Book2.author, "Yakit Singha");
   strcpy(Book2.subject, "Telecom");
   Book2.book_id = 6495700;

   cout << "Book 1 title: " << Book1.title << endl;
   cout << "Book 1 author: " << Book1.author << endl;
   cout << "Book 1 subject: " << Book1.subject << endl;
   cout << "Book 1 book_id: " << Book1.book_id << endl;

   cout << "Book 2 title: " << Book2.title << endl;
   cout << "Book 2 author: " << Book2.author << endl;
   cout << "Book 2 subject: " << Book2.subject << endl;
   cout << "Book 2 book_id: " << Book2.book_id << endl;

   return 0;
}