#include <iostream>
using namespace std;

int main()
{
    int a = 3;
    switch (a % 3 == 0)
    {
    case 0:
    {
        cout << "what";
        break;
    }

    default:
    {
        cout << "kinda good";
        break;
    }
    }
    return 0;
}