#include <iostream>
using namespace std;

int main()
{

    // 3> multiplication table using for loop
    /*
    int num;
    cout << "ENTER THE NUMBER:";
    cin >> num;

    for (int i = 0; i <= 10; i++)
    {
        cout << num << " * " << i << " = " << num * i << endl;
    }
    */

    // 4> sum of n - natural numbers using while loop
    /*
    int num, i = 0, sum = 0;
    cout << "ENTER THE NUMBER FOR YOU WANT SUM N-NATURAL NUMBERS: ";
    cin >> num;

    while (i <= num)
    {
        sum += i;
        i++;
    }

    cout << "SUM OF N-NATURAL NUMBERS: " << sum;
    */

    // 5> reverse the number

    /*
    int num, temp, rev = 0, st;
    cout << "Enter the number:";
    cin >> num;
    temp = num;

    while (temp != 0)
    {
        st = temp % 10;
        rev = rev * 10 + st;
        temp = temp / 10;
    }

    cout << "The reverse number is: " << rev;
    */

    /*
     for (int i = 10; i > 0; i--)
     {
         for (int k = 0; k < i; k++)
         {
             cout << "Hello";
         }
         cout << endl;
     }
 */
    /*
        int a = 4;
        for (int i = 0; i < a * 2; i++)
        {
            for (int k = a; k > 0; k--)
            {
                cout << "-";
            }

            for (int j = 0; j <= i; j++)
            {
                if (i % 2 == 0)
                    cout << "*";
            }
            cout << endl;
        }
        */

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