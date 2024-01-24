// TC -> O(n^2)
// SC -> O(1)

// APPROACH -> starting element ko sbse chota manlo fir uske aage k saare elements se compare krate chlo, then jse hi usse chota koi miljae to swap krdo. it is unstable Algorithm





#include<iostream>
using namespace std;

void SelectionSort(int arr[], int n)
{
    int minIndex = 0;
    for(int i=0; i<n-1; i++)
    {
        minIndex = i;
        for(int j=i+1; j<n; j++)
        {
            if(arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr[minIndex] , arr[i]);
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

    SelectionSort(arr,n);

    cout<<"array after sorting "<<endl;
    Printarry(arr,n);



}