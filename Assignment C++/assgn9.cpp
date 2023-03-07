// Assignment 9

#include <iostream>
using namespace std;

int main()
{

    // Declaration and initialisation
    int num, flag = 0;

    // Taking value
    cout << "Enter the number: " << endl;
    cin >> num;

    // Checking the number is prime or not
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            flag = 1;
        }
    }

    // Checking by flag value to print result
    if (num == 0 or num == 1)
    {
        cout << "\nNot Prime!" << endl;
    }

    else if (num == 2)
    {
        cout << "\nPrime!" << endl;
    }
    else if (flag == 0)
    {
        cout << "\nPrime!" << endl;
    }
    else
    {
        cout << "Not prime!";
    }

    return 0;
}