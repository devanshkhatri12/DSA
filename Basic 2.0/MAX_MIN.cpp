#include<iostream>
using namespace std;

int GetMin(int arr[] , int n)
{
    int min = INT16_MAX;

    for(int i=0; i<n; i++)
    {
        if( arr[i] < min)
        {
            min = arr[i];
        }
    }

    return min;
}

int GetMax(int arr[] , int n)
{
    int max = INT16_MIN;

    for(int i=0; i<n; i++)
    {
        if( arr[i] > max)
        {
            max = arr[i];
        }
    }

    return max;
}


int Inputelements(int arr[] , int n)
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

    cout<<"Maximum value :"<<GetMax(arr,n)<<endl;
    cout<<"Minimum value :"<<GetMin(arr,n)<<endl;

}