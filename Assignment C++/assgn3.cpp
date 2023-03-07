// Assignment 3

#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    // declaring variables for input

    float V, S, T;     // for final storing
    int u, a, t, b, c; // for input

    // taking input for each variable required

    cout << "Enter u: ";
    cin >> u;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter t: ";
    cin >> t;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter c: ";
    cin >> c;

    // now calculating the result and displaying them
    V = u + (a * t);
    S = (u * t) + (0.5 * a);
    T = (2 * a) + sqrt(b) + (9 * c);

    cout << "V: " << V
         << "\nS: " << S
         << "\nT: " << T
         << endl;

    return 0;
}