#include<iostream>
using namespace std;

void SelectionSort(int arr[], int index,  int n)
{
    // basecase -> already sorted i.e. size 0
    if(index == n)
    return ;

    // 1 case solve krdo -> largest elemet ko end m rkhdo
    int minIndex = index;
    for(int i = index + 1; i<n; i++)
    {
        if(arr[minIndex] > arr[i])
        {
            minIndex = i;
        }
    }

    swap(arr[minIndex] , arr[index]);

    SelectionSort(arr, index+1, n);
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

    SelectionSort(arr, 0 ,n);

    cout<<"array after sorting "<<endl;
    Printarry(arr,n);
}