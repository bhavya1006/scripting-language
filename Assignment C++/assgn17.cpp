// Assignment 17

#include <iostream>
using namespace std;

// Creating a class
class student
{
    string name;
    int id, sem;
    float cgpa;

public:
    // Creating a static variable
    static float maxCGPA_Sem1, maxCGPA_Sem2, maxCGPA_Sem3, maxCGPA_Sem4, maxCGPA_Sem5;

    // Creating a Constructor
    student()
    {
        id = 0;
        sem = 0;
        cgpa = 0;
    }

    // Creating a function to set details
    void set_details()
    {

        cout << "Enter your Name: " << endl;
        cin >> name;
        cout << "Enter your ID: " << endl;
        cin >> id;
        cout << "Enter your Semester: " << endl;
        cin >> sem;
        cout << "Enter your CGPA: " << endl;
        cin >> cgpa;

        if (sem == 1 && cgpa > maxCGPA_Sem1)
        {
            maxCGPA_Sem1 = cgpa;
        }
        else if (sem == 2 && cgpa > maxCGPA_Sem2)
        {
            maxCGPA_Sem2 = cgpa;
        }
        else if (sem == 3 && cgpa > maxCGPA_Sem3)
        {
            maxCGPA_Sem3 = cgpa;
        }
        else if (sem == 4 && cgpa > maxCGPA_Sem4)
        {
            maxCGPA_Sem4 = cgpa;
        }
        else if (sem == 5 && cgpa > maxCGPA_Sem5)
        {
            maxCGPA_Sem5 = cgpa;
        }
        else
        {
            cout << "nice try!";
        }
    }

    // Creating a function to get detail
    void get_details()
    {
        cout << "Name: " << name
             << "\nID: " << id
             << "\nSemester: " << sem
             << "\nCGPA: " << cgpa
             << endl;
    }

    // Declaration a function to check max cgpa in semester
    bool check_max();
};

// Creating the check max cgpa
bool student ::check_max()
{
    if (sem == 1 && cgpa == maxCGPA_Sem1)
        return true;

    else if (sem == 2 && cgpa == maxCGPA_Sem2)
        return true;

    else if (sem == 3 && cgpa == maxCGPA_Sem3)
        return true;

    else if (sem == 4 && cgpa == maxCGPA_Sem4)
        return true;

    else if (sem == 5 && cgpa == maxCGPA_Sem5)
        return true;

    else
        return false;
}

// Initialisation static variable
float student ::maxCGPA_Sem2 = 0;
float student ::maxCGPA_Sem3 = 0;
float student ::maxCGPA_Sem4 = 0;
float student ::maxCGPA_Sem1 = 0;
float student ::maxCGPA_Sem5 = 0;

int main()
{
    // Taking 10 object in class
    student s[10];

    // Taking value from user
    for (int i = 0; i < 10; i++)
    {
        s[i].set_details();
    }
    // Displaying values
    cout << endl;
    for (int i = 0; i < 10; i++)
    {
        s[i].get_details();
    }

    // Displaying max semester wise value
    cout << "\nStudents with max marks are: " << endl;
    for (int i = 0; i < 10; i++)
    {
        if (s[i].check_max())
        {
            s[i].get_details();
        }
    }

    return 0;
}
