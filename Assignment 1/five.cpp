#include<iostream>
using namespace std;

int main(){
    cout<<"Size of fundamental data types :"<<endl;
    cout<<"The sizeof(char) : "<<sizeof(char)<<" bytes"<<endl;
    cout<<"The sizeof(short) : "<<sizeof(short)<<" bytes"<<endl;
    cout<<"The sizeof(int) : "<<sizeof(int)<<" bytes"<<endl;
    cout<<"The sizeof(long): "<<sizeof(long)<<" bytes"<<endl;
    cout<<"The sizeof(long long) : "<<sizeof(long long)<<" bytes"<<endl;
    cout<<"The sizeof(float) : "<<sizeof(float)<<" bytes"<<endl;
    cout<<"The sizeof(double) : "<<sizeof(double)<<" bytes"<<endl;
    cout<<"The sizeof(long double) : 1"<<sizeof(long double)<<" bytes"<<endl;
    cout<<"The sizeof(bool) : "<<sizeof(bool)<<" bytes"<<endl;
    return 0;
}