#include <iostream>
using namespace std;

int main()
{
    int l, u, i;
    cout << "Enter the Lower limit:";
    cin >> l;
    cout << "Enter the Upper limit:";
    cin >> u;

    for (i = l; i <= u; i++)
    {
        if (i % 2 != 0)
        {
            cout << i << " ";
        }
    }
    return 0;
}
