#include <iostream>
using namespace std;
void butterfly(int n)
{
    // 1st half outer loop-upper part
    for (int i = 1; i <= n; i++)
    {
        // stars
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        // spaces
        for (int sp = 1; sp <= 2 * (n - i); sp++)
        {
            cout << " ";
        }
        // stars
        for (int k = 1; k <= i; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    // 2nd half outer loop-
    for (int i = n; i >= 1; i--)
    {
        // stars
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        // spaces
        for (int sp = 1; sp <= 2 * (n - i); sp++)
        {
            cout << " ";
        }
        // stars
        for (int k = 1; k <= i; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    butterfly(9);
}