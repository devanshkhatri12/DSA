#include<iostream>
using namespace std;

void print(int *arr, int n, int start =0)   // -> make start arg. optional
{
    for(int i=start; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int n=5;
    int arr[5] = {1,2,3,4,5};
    print(arr, n);
    cout<<endl<<endl;
    print(arr, n, 2);
}