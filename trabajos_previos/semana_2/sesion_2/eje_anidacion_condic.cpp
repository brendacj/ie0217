# include <iostream>
using namespace std;
int main () {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    if (num != 0) {
        if (num > 0) {
            cout << "This number is positive " << endl;
        }
        else {
            cout << "This number is negative " << endl;
        }
    }
    else{
        cout << "This number is 0 " << endl;
    }

    cout << "This line is always printed " << endl;

    return 0;
}