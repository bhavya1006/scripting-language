#include <iostream>
using namespace std;

int main()
{
    char aa = '\t';
    // cout << "Enter character: ";
    // cin >> aa;

    cout
        << "ASCII code of " << aa << " is " << int(aa)+1;
    return 0;
}

// OUTPUT

// ASCII code of A is 65
// ASCII code of Z is 90
// ASCII code of a is 97
// ASCII code of z is 122
// ASCII code of $ is 36
// ASCII code of 5 is 53

// ascii.cpp:6:15: warning: unknown escape sequence: '\040'
//      char aa = '\ ';
//                ^~~~
// ASCII code of   is 32
