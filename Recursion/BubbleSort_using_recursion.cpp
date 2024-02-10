#include<iostream>
using namespace std;

void BubbleSort(int arr[], int n)
{
    // basecase -> already sorted
    if(n == 0 || n == 1)
    return ;

    // 1 case solve krdo -> largest elemet ko end m rkhdo
    for(int i=0; i<n-1; i++)
    {
        if(arr[i] > arr[i+1])
        {
            swap(arr[i] , arr[i+1]);
        }
    }

    BubbleSort(arr , n-1);
}


void Inputarry(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
}

void Printarry(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
}

int main()
{
    int n;
    cout<<"Enter Length"<<endl;
    cin>>n;

    int arr[10];

    Inputarry(arr,n);

    cout<<"array before sorting "<<endl;
    Printarry(arr,n);

    BubbleSort(arr,n);

    cout<<"array after sorting "<<endl;
    Printarry(arr,n);
}