// Assignment 10

#include <iostream>
using namespace std;

int main()
{

    // Declaration
    int marks;

    // Taking value from user
    cout << "Enter the marks: " << endl;
    cin >> marks;

    // Checking by else if ladder and displaying result
    if (marks >= 90)
    {
        cout << "Grade: A+";
    }
    else if (marks >= 80)
    {
        cout << "Grade: A";
    }
    else if (marks >= 70)
    {
        cout << "Grade: B+";
    }
    else if (marks >= 60)
    {
        cout << "Grade: B";
    }
    else if (marks >= 50)
    {
        cout << "Grade: C+";
    }
    else if (marks >= 40)
    {
        cout << "Grade: C";
    }
    else
    {
        cout << "Failed";
    }

    return 0;
}