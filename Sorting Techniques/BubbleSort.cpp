// TC -> O(n^2)
// SC -> O(1)

// APPROACH -> All jth element ko j+1th elemet k sath compare krana hai. or agr jth  > j+1th ho toh swap krdo. it is table algo. 




#include<iostream>
using namespace std;

void BubbleSort(int arr[], int n)
{
    for(int i=1; i<n; i++)
    {
        for(int j=0; j<n-i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
            }
        }
    }
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