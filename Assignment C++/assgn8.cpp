// Assignment 8

#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    // Declaration
    double a, b, c, d;
    float root1, root2;
    float re, im;

    // Taking values for forming of quadratic
    cout << "Enter coefficient of x^2: ";
    cin >> a;
    cout << "Enter coefficient of x: ";
    cin >> b;
    cout << "Enter constant: ";
    cin >> c;

    // Finding discriminant and storing in variable "d"
    d = (b * b) - (4 * a * c);

    // Check for real (unequal and equal) and imaginary roots and displaying them
    if (d > 0)
    {

        root1 = (-1 * b / (2 * a)) + (sqrt(d) / (2 * a));
        root2 = (-1 * b / (2 * a)) - (sqrt(d) / (2 * a));

        cout << "Root1: " << root1 << endl;
        cout << "Root2: " << root2 << endl;
    }

    else if (d == 0)
    {
        root1 = -1 * b / (2 * a);
        root2 = root1;
        cout << "Root: " << root1 << endl;
    }

    else if (d < 0)
    {
        re = -1 * b / (2 * a);
        im = (sqrt(-1 * d) / (2 * a));
        cout << "Root1: " << re << " + i" << im << endl;
        cout << "Root2: " << re << " - i" << im << endl;
    }

    return 0;
}