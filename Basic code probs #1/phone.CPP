// initial program without using arrays

#include <iostream>
using namespace std;

int main()
{

    int c0 = 0, c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0, c6 = 0, c7 = 0, c8 = 0, c9 = 0;
    string phone;

    cout << "Enter phone number: ";
    cin >> phone;

    for (int i = 0; i < 11; i++)
    {
        char c = phone[i];
        //   cout << c << "\n";
        switch (c)
        {
        case '0':
            c0++;
            break;
        case '1':
            c1++;
            break;
        case '2':
            c2++;
            break;
        case '3':
            c3++;
            break;
        case '4':
            c4++;
            break;
        case '5':
            c5++;
            break;
        case '6':
            c6++;
            break;
        case '7':
            c7++;
            break;
        case '8':
            c8++;
            break;
        case '9':
            c9++;
            break;

        default:
            break;
        }
    }

    if (c0 >= 1)
        cout << "Zero:" << c0 << "\n";
    if (c1 >= 1)
        cout << "One:" << c1 << "\n";
    if (c2 >= 1)
        cout << "Two:" << c2 << "\n";
    if (c3 >= 1)
        cout << "Three:" << c3 << "\n";
    if (c4 >= 1)
        cout << "Four:" << c4 << "\n";
    if (c5 >= 1)
        cout << "Five:" << c5 << "\n";
    if (c6 >= 1)
        cout << "Six:" << c6 << "\n";
    if (c7 >= 1)
        cout << "Seven:" << c7 << "\n";
    if (c8 >= 1)
        cout << "Eight:" << c8 << "\n";
    if (c9 >= 1)
        cout << "Nine:" << c9 << "\n";
}