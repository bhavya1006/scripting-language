// Assignment 5

#include <iostream>
using namespace std;

int main()
{
    // Declaration and initialization of variables
    int a = 45, b = 34, temp;
    // Swaping with third variable
    // Displaying before swaping
    cout << "Before swapping" << endl;
    cout << "a: " << a
         << "\nb: " << b
         << endl;

    // Swaping by third variable
    temp = a;
    a = b;
    b = temp;

    // Displaying result after swaping
    cout << "After swapping" << endl;
    cout << "a: " << a
         << "\nb: " << b
         << endl;

    // Swaping without third variable
    // Displaying before swaping
    cout << "Before swapping" << endl;
    cout << "a: " << a
         << "\nb: " << b
         << endl;

    // Algebric approach to swap values
    a = a + b;
    b = a - b;
    a = a - b;

    // Displaying result after swaping
    cout << "After swapping" << endl;
    cout << "a: " << a
         << "\nb: " << b
         << endl;

    return 0;
}