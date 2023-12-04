#include<bits/stdc++.h>
using namespace std;


bool isfind(int arr[][4], int target, int n, int m)
{
    for(int row=0; row<3; row++)
    {
        for(int col=0; col<4; col++)
        {
            if(arr[row][col] == target)
            {
                return true;
            }
        }
    }
    return false;
}
int main()
{
    int arr[3][4];


    // row wise input
    for(int row=0; row<3; row++)
    {
        for(int col=0; col<4; col++)
        {
            cin>>arr[row][col];
        }
    }

    int target;
    cout<<"Searching Element"<<endl;
    cin>>target;

    if(isfind(arr,target,3,4))
    {
        cout<<"Element is found"<<endl;
    }
    else
    {
        cout<<"Not found"<<endl;
    }
}