// Assignment 11

#include <iostream>
using namespace std;

int main()
{
    // Declaration
    int year;

    // Taking value from user
    cout << "Enter the year: ";
    cin >> year;

    // Checking the year as leap year or not
    if (year % 100 == 0)
        year % 400 == 0 ? cout << "The " << year << " is a leap year." : cout << "The " << year << " is not a leap year.";
    else
        year % 4 == 0 ? cout << "The " << year << " is a leap year." : cout << "The " << year << " is not a leap year.";

    return 0;
}