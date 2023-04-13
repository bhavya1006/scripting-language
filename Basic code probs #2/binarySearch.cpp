// Binary Search

#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int arr[] = {11,22,30,33,40,44,55,60,66,77,80,99,99};
    int find = 89;
    int beg=1;
    int end=sizeof(arr)/sizeof(arr[0]);
    int mid;
    int n = round(log(end))+1;
    for (int i = 0; i < n; i++)
    {
        mid = (beg + end)/2;
        if (arr[mid]==find)
        {
            cout<<"Perfect found at position: "<<mid<<endl;
            break;
        }
        else if (arr[mid]>find)
        {
            // cout<<"big bhai"<<endl;
            end = mid - 1;
        }
        else if (arr[mid]<find)
        {
            // cout<<"chotu bhai"<<endl;
            beg = mid + 1;
        }
        if(i == n-1) cout<<"number not found";
    }
    return 0;
}