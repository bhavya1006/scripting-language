// Assignment 4

#include <iostream>
using namespace std;

int main()
{

    // Declaring variables and array as per required
    string name;
    int rollno, marks[5];

    // Taking input for name rollno then marks by for loop

    cout << "Enter your name: " << endl;
    getline(cin, name);
    cout << "Enter Roll number: " << endl;
    cin >> rollno;

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter Marks" << i + 1 << " ==> ";
        cin >> marks[i];
    }

    // Calculating percentage
    float perc = 0;
    for (int i = 0; i < 5; i++)
    {
        perc += marks[i];
    }
    perc /= 5;

    // Displaying all

    cout << "Name: " << name << endl;
    cout << "Roll no.: " << rollno << endl;
    cout << "Percentage: " << perc << endl;

    return 0;
}