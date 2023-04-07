#include <iostream>
using namespace std;

int arrInput(int n)
{
    int i = 0, array[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter " << i + 1 << " element: ";
        cin >> array[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }

    // int arr[n] = array[];
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] + 1 << " ";
    // }

    return 0;
}
int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;

    arrInput(num);

    return 0;
}