#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n <= 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int sumNatural(int n)
{
    int i = 0, sum = 0;
    while (i < n)
    {
        sum += i;
        i++;
    }
    return sum;
}

int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;
    cout << factorial(num) << endl;
    cout << sumNatural(num);
}