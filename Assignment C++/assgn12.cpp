// Assignment 12

#include <iostream>
using namespace std;

int main()
{

    // Declaration and initialisation
    int num, temp, sum = 0;

    // Taking value from user
    cout << "Enter the number: " << endl;
    cin >> num;

    // Using for-loop to have sum digit by digit
    for (; num > 0; num /= 10)
    {
        temp = num % 10;
        sum += temp;
    }

    // Displaying sum of digits
    cout << "Sum: " << sum << endl;

    return 0;
}