#include<iostream>
using namespace std;

void SwapAlternative(int arr[] , int n)
{
    for(int i=0; i<n; i+=2) 
    {
        if(i++ < n)
        {
            swap(arr[i] , arr[i++]);
        }
    }
}

void Printelements(int arr[] , int n)
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
    cout<<"Enter size"<<endl;
    cin>>n;


    int arr[10];

    Inputelements(arr,n);

    SwapAlternative(arr,n);

    Printelements(arr,n);

}