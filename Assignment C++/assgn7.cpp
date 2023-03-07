// Assignment 7

#include <iostream>
using namespace std;

int main()
{

    // Declaring, initializing and taking input from user
    int num1, num2, num3, max;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Enter third number: ";
    cin >> num3;
    cout << endl;

    // equating by ternary operator for largest among the numbers

    max = num1 > num2 ? num1 > num3 ? num1 : num3 : num2 > num3 ? num2
                                                                : num3;
    cout << "Largest among the number is " << max;
    cout << "\n\n\n";
    return 0;
}