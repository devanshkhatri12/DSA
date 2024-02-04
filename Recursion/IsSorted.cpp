#include<iostream>
using namespace std;

bool Sorted(int arr[], int size)
{
    // basecase 
    if(size == 0 || size == 1)
    return true;


    if(arr[0] > arr[1])      //processing
    {
        return false;    
    }
    else
    {
        return Sorted(arr + 1, size - 1);         //recursive relation
    }
}

int main()
{
    int size;
    cin>>size;

    int arr[10] = {2,4,1,8,10};

    int ans = Sorted(arr, size);

    if(ans)
    {
        cout<<"Array is sorted"<<endl;
    }
    else
    {
        cout<<"Array is not sorted"<<endl;
    }
}