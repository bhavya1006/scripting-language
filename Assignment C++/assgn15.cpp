// Assignment 15

#include <iostream>
using namespace std;

int main()
{
    // Declaration and initialisation
    int n, cnt = 0;

    // Taking order from user
    cout << "Enter the order: ";
    cin >> n;

    // Creating matrices
    int mat1[n * n], mat2[n * n], add[n * n];

    // Taking matrix 1 from user and displaying
    cout << "\nEnter elements for 1st matrix: " << endl;
    for (int i = 0; i < n * n; i++)
    {
        cout << "Enter the " << i + 1 << " matrix of " << n << "*" << n << " order:- " << endl;
        cin >> mat1[i];
    }
    cout << "\nMatrix 1:-" << endl;
    for (int i = 0; i < n * n; i++)
    {
        cout << mat1[i] << " ";
        cnt += 1;
        if (cnt == n)
        {
            cnt = 0;
            cout << "\n";
        }
    }

    // Taking matrix 1 from user and displaying
    cout << "\nEnter elements for 2st matrix: " << endl;
    for (int i = 0; i < n * n; i++)
    {
        cout << "Enter the " << i + 1 << " matrix of " << n << "*" << n << "order" << endl;
        cin >> mat2[i];
    }
    cout << "\nMatrix 2:-" << endl;
    for (int i = 0; i < n * n; i++)
    {
        cout << mat2[i] << " ";
        cnt += 1;
        if (cnt == n)
        {
            cnt = 0;
            cout << "\n";
        }
    }

    // Adding both matrix and displaying
    for (int i = 0; i < n * n; i++)
    {
        add[i] = mat1[i] + mat2[i];
    }
    cout << "\n\nMatrix after addition: " << endl;
    for (int i = 0; i < n * n; i++)
    {
        cout << add[i] << " ";
        cnt += 1;
        if (cnt == n)
        {
            cnt = 0;
            cout << "\n";
        }
    }

    return 0;
}