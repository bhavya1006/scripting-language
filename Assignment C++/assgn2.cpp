// Assignment 2

#include <iostream>
using namespace std;

int main()
{
    // declaration and initialization of variables
    float pie = 3.14, r, h, vol = 0;

    // taking input from user of radius and height
    cout << "Enter radius(cm) :";
    cin >> r;
    cout << "Enter height(cm) :";
    cin >> h;

    // calculating volume of cylinder
    vol = pie * r * r * h;

    // displaying output
    cout
        << "Volume of cylinder with radius " << r << " and height " << h << " is : " << vol << "cm square";

    return 0;
}
