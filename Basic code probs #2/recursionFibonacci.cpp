#include<iostream>
using namespace std;

int fibonacci(int n){
    if (n<=1)
        return n;
    
    return fibonacci(n-1) + fibonacci(n-2);
    
}

int main(){
    for (int i = 0; i < 20; i++)
    {
        int x=fibonacci(i);
        cout<<x<<" ";
    }
    
}