// Assignment 16

#include <iostream>
using namespace std;

// Creating structure to store real part and imaginary part
struct complex
{
    float real, img;
};

int main()
{

    // Creating structures to store
    struct complex c1, c2, sum;

    // Taking complex number from user and storing them in structure
    cout << "Enter the real of of 1st complex number: " << endl;
    cin >> c1.real;
    cout << "Enter the imaginary part of 1st complex number: " << endl;
    cin >> c1.img;
    cout << "\nComplex number#1: " << c1.real << " + i(" << c1.img << ")" << endl;

    cout << "\nEnter the real of of 2nd complex number: " << endl;
    cin >> c2.real;
    cout << "Enter the imaginary part of 2nd complex number: " << endl;
    cin >> c2.img;
    cout << "\nComplex number#2: " << c2.real << " + i(" << c2.img << ")" << endl;

    // Calculating sum and storing in structure and then displaying
    sum.real = c1.real + c2.real;
    sum.img = c1.img + c2.img;
    cout << "\nSum of complex number is: " << sum.real << " +i(" << sum.img << ")" << endl;

    return 0;
}