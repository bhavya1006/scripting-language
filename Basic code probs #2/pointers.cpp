#include <iostream>
using namespace std;
int main()
{
    int a = 3;
    int *b;
    b = &a;

    cout << "Address of a is: " << &a << endl;
    cout << "Address of a is: " << b << endl;

    cout << "Value at b is: " << *b << endl;

    // let's see pointer to pointer

    int **c = &b;

    cout << "Address of b is: " << &b << endl;
    cout << "Address of b is: " << c << endl;

    cout << "Value at c is: " << *c << endl;
    cout << "Value at c of b: " << **c << endl;

    return 0;
}