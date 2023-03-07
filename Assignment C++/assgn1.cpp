// Assignment 1

#include <iostream>
using namespace std;
int main()
{
    // declaration of all variables and initialization
    int a, b, sum = 0;

    // taking input from user in two variables
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;

    // adding variable and storing in sum
    sum = a + b;

    // displaying result
    cout << "Sum of numbers " << a << " and " << b << " is : " << sum;

    return 0;
}