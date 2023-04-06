#include <iostream>
using namespace std;

int sum(int a, int b)
{
    int c;
    c = a + b;
    return c;
}

string ch()
{
    cout << "Hello world";
}

int main()
{
    int x, y;
    cout << "Enter First Number:" << endl;
    cin >> x;
    cout << "Enter Second Number:" << endl;
    cin >> y;

    cout << "The Function returned the value: " << sum(x, y) << endl;
    ch();
    arr();

    return 0;
}
