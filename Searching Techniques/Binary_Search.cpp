#include<iostream>
using namespace std;

void Inputarry(int arr[] , int n)
{
    cout<<"enter Elements"<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
}

int Binarysearch(int arr[] , int n , int key)
{
    int start = 0 , end =n-1;

    int  mid = start + (end-start)/2;

    while(start <= end)
    {
        if(arr[mid] == key)
        {
            return mid;
        }
        else if(arr[mid]  < key)
        {
            start = mid +1;
        }
        else
        {
            end = mid -1;
        }
        int  mid = start + (end-start)/2;
    }
    return -1;
}

int main()
{
    int n;
    cout<<"Enter size input elements"<<endl;
    cin>>n;

    int key;
    cout<<"Enter searching key"<<endl;
    cin>>key;

    int arr[1000];

    Inputarry(arr , n);

    //     int arr[10];

    // Inputelements(arr,n);

    int index = Binarysearch(arr , n , key);

    cout<<"key is present at index : "<<index<<endl;

}