// Assignment 14

#include <iostream>
using namespace std;

// Creating function to calculate factorial
int factorial(int n)
{
    // Checking n for 1 to stop factorial
    if (n == 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}
int main()
{
    // Declaration
    int n;

    // Taking from user
    cout << "Enter a number: " << endl;
    cin >> n;

    // Taking facotrial of n
    cout << factorial(4);
    return 0;
}