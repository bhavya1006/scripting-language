#include <iostream>
using namespace std;

int main()
{
    int z;
    cout << "Enter the Z size: ";
    cin >> z;

    for (int i = 0; i < z; i++)
    {
        for (int j = 0; j < z; j++)
        {
            if (i == 0 or i == z - 1)
            {
                cout << "*"
                     << " ";
            }
            else
            {
                if (j == z - i - 1)
                {
                    cout << "*"
                         << " ";
                }
                else
                {
                    cout << "  ";
                }
            }
        }
        cout << endl;
    }
}