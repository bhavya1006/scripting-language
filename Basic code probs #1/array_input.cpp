#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 3, 6};
    cout << arr[1] << endl;

    int marks[6];

    for (int i = 0; i < 6; i++)
    {
        cout << "Enter the marks of " << i + 1 << "th student:" << endl;
        cin >> marks[i];
    }
    for (int i = 0; i < 6; i++)
    {
        cout << "Marks of " << i + 1 << "th student is: " << marks[i] << endl;
    }
    return 0;
}