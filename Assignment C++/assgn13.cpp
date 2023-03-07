// Assignment 13

#include <iostream>
using namespace std;

int main()
{
    // <i>

    int num;
    cout << "Enter the number: " << endl;
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        for (int j = num; j > i; j--)
        {
            cout << "*"
                 << " ";
        }
        cout << endl;
    }
    cout << endl;

    // <ii>

    for (int i = 1; i <= num; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
    cout << endl;

    // <iii>

    for (int i = 0; i < num; i++)
    {
        for (int k = num; k > i; k--)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << j + 1;
        }
        cout << endl;
    }
    cout << endl;

    // <iv>

    int aa = int('A');
    for (int i = 1; i <= num; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << char(int(aa) + j);
        }
        cout << endl;
    }
    cout << endl;

    // <v>

    for (int i = 0; i < num; i++)
    {
        for (int k = num - 1; k > i; k--)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        for (int m = 0; m < i; m++)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;

    // <vi>

    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int k = (num * 2) - (i + 1); k > i; k--)
        {
            cout << "*";
        }

        cout << endl;
    }
    cout << endl;

    // <vii>

    for (int i = 0; i < num; i++)
    {
        for (int k = num; k > i; k--)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << j + 1;
        }
        for (int m = i; m > 0; m--)
        {
            cout << m;
        }
        cout << endl;
    }
    cout << endl;

    // <viii>

    int a = int('A');
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        int c = 0;
        for (int k = num; k > i; k--)
        {

            cout << char(a + c) << " ";
            c += 1;
        }
        cout << endl;
    }
    cout << endl;

    // <ix>

    int u, l;

    cout << "Enter the upper limit: " << endl;
    cin >> u;
    cout << "Enter the lower limit: " << endl;
    cin >> l;

    for (int i = 1; i < u; i++)
    {
        for (int j = 1; j < (i * 2) - 2; j++)
        {
            cout << j;
        }
        cout << endl;
    }
    for (int i = l; i > 0; i--)
    {
        for (int j = 1; j < (i * 2) - 2; j++)
        {
            cout << j;
        }
        cout << endl;
    }
    cout << endl;

    // <x>

    int space = 1;
    for (int i = num; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        if (i != num)
        {
            for (int k = 1; k <= space; k++)
            {
                cout << " ";
            }
            space += 2;
        }
        for (int j = i; j >= 1; j--)
        {
            if (j != num)
            {
                cout << "*";
            }
        }
        cout << endl;
    }
    cout << endl;

    // <xi>

    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            if (i == 0 or i == num - 1)
            {
                cout << "*"
                     << " ";
            }
            else
            {
                if (j == num - i - 1)
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
    cout << endl;

    // <xii>

    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            if (i == 0 or j == 0 or i == num - 1 or j == num - 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}