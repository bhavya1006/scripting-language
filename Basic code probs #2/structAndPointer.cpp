#include <iostream>
using namespace std;

struct student
{
    char name[30];
    int id, sem;
    float cgpa;
};

int main()
{
    int num;
    cout << "Enter the number of details to fill: ";
    cin >> num;

    struct student *p = new struct student[num];

    for (int i = 0; i < num; i++)
    {
        cout << "Enter the name of " << i + 1 << "th student: ";
        cin >> (p + i)->name;

        cout << "Enter the id of " << i + 1 << "th student: ";
        cin >> (p + i)->id;

        cout << "Enter the sem of " << i + 1 << "th student: ";
        cin >> (p + i)->sem;

        cout << "Enter the cgpa of " << i + 1 << "th student: ";
        cin >> (p + i)->cgpa;
    }

    int max_cgpa = 0;
    struct student *max_student = NULL;

    for (int j = 1; j <= 2; j++)
    {
        for (int i = 0; i < num; i++)
        {
            if ((p + i)->sem == j)
            {
                if ((p+i)->cgpa > max_cgpa)
                {
                    max_cgpa=(p+i)->cgpa;
                    max_student = p+i;
                }
                
            }
        }

        cout<<"The max score is obtained by "<<max_student->name<<" in semester "<<max_student->sem;

        max_cgpa=0;
        max_student=NULL;
    }

    
    return 0;
}