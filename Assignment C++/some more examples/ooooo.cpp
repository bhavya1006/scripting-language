#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter a number: "<<endl;
    cin>>num;

    // for (int i = 0; i < num; i++)
    // {
    //     for (int j = 0; j < num; j++)
    //     {
    //         if (i == 0 or j == 0 or i == num-1 or j == num-1)
    //         cout<<"*";
    //         else
    //         cout<<" ";
    //     }
    //     cout<<endl;
        
    // }

    for (int i = 0; i < num; i++)
    {
        for (int k = num; k > i; k--)
        {
            cout<<" ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout<<j+1;
        }
        cout<<endl;

    }
    
    return 0;
}