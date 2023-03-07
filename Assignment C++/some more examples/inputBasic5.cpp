#include <iostream>
using namespace std;

int main()
{
    string name;
    cout << "Enter name: ";
    getline(cin, name);

    int roll, marks[5];
    cout << "Enter Roll Number: ";
    cin >> roll;

    string markSub[5] = {"English",
                         "Math",
                         "Physics",
                         "Chemistry",
                         "Computer Science"};

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter marks of " << markSub[i] << " out of 100: ";
        cin >> marks[i];
    }

    float perc = 0;
    for (int i = 0; i < 5; i++)
    {
        perc += marks[i];
    }
    perc /= 5;

    cout << "\nName: " << name << endl;
    cout << "Roll No.: " << roll << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Marks obtained in " << markSub[i] << " is: " << marks[i] << endl;
    }
    cout << "Percentage : " << perc;

    return 0;
}