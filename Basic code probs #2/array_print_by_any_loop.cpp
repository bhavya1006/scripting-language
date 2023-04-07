#include <iostream>
using namespace std;
int main()
{
    int array[6] = {3, 5, 2, 6, 8, 9};

    // for loop display
    /*
    for (int i = 0; i < 6; i++)
    {
        cout << array[i] << ' ';
    }
    */

    // while loop display
    int i = 0;
    /*
    while (i < 6)
    {
        cout << array[i] << ' ';
        i++;
    }
    */

    do
    {
        cout << array[i] << ' ';
        i++;
    } while (i < 6);

    return 0;
}