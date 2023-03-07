#include <iostream>
using namespace std;

int main()
{
    int oddNo;
    cout << "Enter the odd number: ";
    cin >> oddNo;

    for (int i = 0; i < oddNo; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j < (oddNo + 1) / 2)
            {
                cout << j + 1;
            }
        }
        cout << endl;
    }

    return 0;
}