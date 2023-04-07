#include <iostream>
using namespace std;

typedef struct employee
{
    /* data */
    int eID;
    char favChar;
    float salary;
} ok;

int main()
{
    ok bhavya;
    bhavya.eID = 1;
    bhavya.favChar = 'B';
    bhavya.salary = 29990;

    cout << bhavya.salary;

    return 0;
}