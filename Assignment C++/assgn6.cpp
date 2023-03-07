// Assignment 6

#include <iostream>
using namespace std;

int main()
{

    // Declaration and initialization
    int a = 7;

    cout << "Original value of a: " << a << endl;

    // Unary prefix increment
    cout << "Value of a after prefix increment: " << ++a << endl;

    // Unary postfix increment
    cout << "Value of a after postfix increment: " << a++ << endl;
    cout << "New value of a after postfix increment: " << a << endl;

    // Unary prefix decrement
    cout << "Value of a after prefix decrement: " << --a << endl;

    // Unary postfix decrement
    cout << "Value of a after postfix decrement: " << a-- << endl;
    cout << "New value of a after postfix decrement: " << a << endl;

    cout << "\n\n\n";
    return 0;
}