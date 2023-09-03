#include<iostream>
using namespace std;

void Reverseelements(int arr[], int n)
{
    int start = 0;
    int end =n-1;

    while(start <= end)
    {
        swap(arr[start] , arr[end]);
        start++;
        end--;
    }
} 

void Printelements(int arr[],int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void  Inputelements(int arr[] , int n)
{
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
}

int main()
{
    int n;
    cout<<"Enter number"<<endl;
    cin>>n;

    int arr[10];

    Inputelements(arr,n);
    // Printelements(arr,n);


    cout<<"Reverse Array : "<<endl;
    Reverseelements(arr,n);
    Printelements(arr,n);
}