#include <iostream>
using namespace std;

int main()
{
    int a, b, temp;
    cout << "Enter element a and b: ";
    cin >> a >> b;

    cout << "Before swaping:" << endl;
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;

    temp = a;
    a = b;
    b = temp;

    cout << "After swaping:" << endl;
    cout << "a=" << a << endl;
    cout << "b=" << b;
    return 0;
}