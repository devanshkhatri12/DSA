#include<iostream>
using namespace std;


void Printarry(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
}

void Merge(int *arr, int s, int e)
{
    int mid = s + (e-s)/2;

    // length for subaray
    int len1 = mid - s + 1;
    int len2 = e - mid;

    // create new array 
    int *first = new int[len1];
    int *second = new int[len2];

    // copy values into subarray
    int mainArryIndex = s;
    for(int i=0; i<len1; i++)
    {
        first[i] = arr[mainArryIndex++];
    }

    mainArryIndex = mid+1;
    for(int i=0; i<len1; i++)
    {
        second[i] = arr[mainArryIndex++];
    }

    // merge 2 sorted arrays
    int index1 = 0;
    int index2 = 0;
    mainArryIndex = s;

    while(index1 < len1 && index2 < len2)
    {
        if(first[index1] < second[index2])
        {
            arr[mainArryIndex++] = first[index1++];
        }
        else
        {
            arr[mainArryIndex++] = second[index2++];
        }
    }

    while(index1 < len1)
    {
        arr[mainArryIndex++] = first[index1++];
    }

    while(index2 < len2)
    {
        arr[mainArryIndex++] = second[index2++];
    }

    delete [] first;
    delete [] second;
}

void MergeSort(int *arr, int s, int e)
{
    // basecase
    if(s >= e)
    return ;

    int mid = s + (e-s)/2;

    // left part m jao
    MergeSort(arr, s, mid);

    // rightpart m jao
    MergeSort(arr, mid+1, e);

    // merge array's
    Merge(arr, s, e);
}

int main()
{
    int size;
    cin>>size;

    int arr[15] = {3,7,0,1,5,8,3,2,34,66,87,23,12,12,12}; 

    MergeSort(arr, 0 , size-1);

    Printarry(arr, size);
}


// TIME COMPLEXITY -> O(n logn)
// SPACE CoMPLEXITY -> O(n)