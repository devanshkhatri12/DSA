#include<iostream>
using namespace std;

bool BinarySearch(int *arr, int s, int e, int key)
{
    // processing
    int mid  = s + (e-s)/2;

    // basecase
    if(s>e)
    return false;

    if(arr[mid] == key)
    return true;

    // recursive relation
    if(arr[mid] < key)
    {
        return BinarySearch(arr, mid+1, e, key);
    }
    else
    {
        return BinarySearch(arr, s, mid-1, key);
    }
}

int main()
{
    int n;
    cin>>n;

    int key;
    cin>>key;

    int arr[5] = {2,5,0,1,7};

    int ans = BinarySearch(arr, 0, n-1, key);

    cout<<"present or not "<<ans<<endl;

    if(ans)
    {
        cout<<"Key is present "<<endl;
    }
    else
    {
        cout<<"Key is Absent "<<endl;
    }
}