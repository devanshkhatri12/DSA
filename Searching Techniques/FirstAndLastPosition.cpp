#include<iostream>
using namespace std;

int FirstOccurance(int arr[], int n, int k)
{
    int s=0 , e=n-1;
    int ans = -1;
    int mid = s + (e-s)/2;

    while(s <= e)
    {
        if(arr[mid] == k)
        {
            ans = mid;
            e = mid -1;
        }
        else if(arr[mid] < k)
        {
            s = mid +1;
        }
        else{
            e = mid -1;
        }

        mid = s + (e-s)/2;
    }
    return ans;
}

int lastOccurance(int arr[], int n, int k)
{   int ans = -1;
    int s=0, e =n-1;
    int mid = s + (e-s)/2;
    
    while(s<=e)
    {
        if(arr[mid] == k)
        {
            ans = mid;
            s = mid +1;
        }
        else if(arr[mid] < k)
        {
            s = mid+1;
        }
        else
        {
            e =mid-1;
        }
        
        mid = s + (e-s)/2;
    }

    return ans;
}

void Inputarry(int arr[] , int n)
{
    cout<<"enter array elements"<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    } 
    cout<<endl;
}

int main()
{
    int n;
    cout<<"Enter size"<<endl;
    cin>>n;

    int k;
    cout<<"enter key"<<endl;
    cin>>k;

    int arr[100];

    Inputarry(arr, n);


    cout<<"first occurance of "<<k<<"is present at "<<FirstOccurance(arr,n,k)<<" index"<<endl;

    cout<<"first occurance of "<<k<<"is present at "<<FirstOccurance(arr,n,k)<<" index"<<endl;

}