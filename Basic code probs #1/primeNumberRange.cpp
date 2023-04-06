#include <iostream>
using namespace std;

int main()
{
    int u, l, flag = 0;
    cout << "Enter lower limit:";
    cin >> l;
    cout << "Enter upper limit:";
    cin >> u;

    for (int i = l; i <= u; i++)
    {

        // cout << "i" << i << endl;
        if (i == 1 || i == 0)
        {
            flag = 1;
            continue;
        }
        if (i == 2)
        {
            flag = 0;
        }

        for (int j = 2; j < i; j++)
        {
            // cout << "\n\ni and j\t" << i << " and " << j << endl;
            // cout << "division:" << i % j << "\n\n";
            if (i % j == 0)
            {
                flag = 1;
            }
        }

        if (i == 2)
        {
            flag = 0;
        }

        // cout << "\t\t\t" << flag << "\n";

        if (flag == 0)
        {
            cout << i << " ";
        }

        flag = 0;
    }
    return 0;
}