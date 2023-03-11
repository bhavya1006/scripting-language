#include <iostream>
using namespace std;

class student
{
    int r, i;

public:
    student()
    {
        this->r = 1;
        this->i = 1;
    }
    student(int a, int b)
    {
        r = a;
        i = b;
    }
    void display()
    {
        cout << r << "  &  " << i << endl;
    }
    student operator++()
    {
        r = r + 1;
        i = i + 2;
         return *this;
    }
    student operator++(int)
    {
        student k(*this);
        r++;
        i=i+2;
        return k;
    }
};
int main()
{
    student n(3, 4);
    n.display();
    n = n++;
    n.display();
    n = ++n;
    n.display();
    return 0;
}
