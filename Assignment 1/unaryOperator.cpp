#include <iostream>
using namespace std;

class bacho
{
    int r, i;

public:
    bacho()
    {
        this->r = 1;
        this->i = 1;
    }
    bacho(int a, int b)
    {
        r = a;
        i = b;
    }
    void display()
    {
        cout << r << "  &  " << i << endl;
    }
    bacho operator++()
    {
        r = r + 1;
        i = i + 2;
    }
    bacho operator++(int)
    {
        bacho k;
        k.r = this->r + 1;
        k.i = this->i + 2;
        return k;
    }
};
int main()
{
    bacho n(3, 4);
    n.display();
    n = n++;
    n.display();
    return 0;
}