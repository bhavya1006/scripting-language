#include <iostream>
using namespace std;
int main()
{
    int marks[6] = {98, 65, 78, 90, 89, 80};

    int *p = marks;

    cout << *(p++) << endl;
    cout << *(++p);
    // cout << "The value of marks[0] is: " << *p << endl;
    // cout << "The value of marks[1] is: " << *(p + 1) << endl;
    // cout << "The value of marks[2] is: " << *(p + 2) << endl;
    // cout << "The value of marks[3] is: " << *(p + 3) << endl;
    // cout << "The value of marks[5] is: " << *(p + 4) << endl;
    // cout << "The value of marks[4] is: " << *(p + 5) << endl;
}