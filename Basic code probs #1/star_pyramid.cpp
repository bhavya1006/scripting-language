#include <iostream>
using namespace std;

int main()
{
    // declaration,initialization and taking input in num for number of rows
    int row, countStar = 0, countSpace = 0;
    cout << "Enter the number of rows : ";
    cin >> row;

    // making loop for counting rows
    for (int i = 0; i <= row; i++)
    {

        // creating loop for spaces in decresing order
        for (int k = row; k > i; k--)
        {
            cout << " ";
            countSpace += 1; // counting number of spaces
        }

        // creating loop for starring 1 to row number th stars
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
            countStar += 1; // counting number of stars
        }

        // creating loop for starring in order to complete pyramid for odd pair in all rows
        for (int m = 0; m < i; m++)
        {
            cout << "*";
            countStar += 1; // counting number of stars
        }

        cout << endl;
    }
    // displaying the count of stars and spaces
    cout << "Number of stars: " << countStar << endl;
    cout << "Number of spaces: " << countSpace;

    return 0;
}