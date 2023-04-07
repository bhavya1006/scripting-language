#include <iostream>
using namespace std;

int main()
{
    int arry[6] = {5, 1, 0, 3, 8, 4}, i, j, temp;
    for (i = 0; i < 6 - 1; i++)
    {
        for (j = 0; j < 6 - i - 1; j++)
        {
            if (arry[j] > arry[j + 1])
            {
                temp = arry[j];
                arry[j] = arry[j + 1];
                arry[j + 1] = temp;
            }
        }
    }

    cout << "Array sorted: ";
    for (int k = 0; k < 6; k++)
    {
        cout << arry[k] << " ";
    }
}