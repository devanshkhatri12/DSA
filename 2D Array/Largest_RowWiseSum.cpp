#include<bits/stdc++.h>
using namespace std;

int RowWiseSum(int arr[][3], int n, int m)
{
    int maxi = INT16_MIN;
    int rowIndex =-1;

    cout<<"Print row wise sum "<<endl;
    for(int row=0; row<3; row++)
    {
        int sum=0;
        for(int col=0; col<3; col++)
        {
            sum += arr[row][col];
        }
        cout<<sum<<" ";
        if(sum > maxi)
        {
            maxi  =sum;
            rowIndex = row;
        }
    }
        cout<<endl;
        cout<<"Largest rowsum  Index at "<<rowIndex<<endl;
}

int main()
{
    int arr[3][3];

    // Input elements
    cout<<"Input Elements"<<endl;
    for(int row=0;  row<3; row++)
    {
        for(int col=0; col<3; col++)
        {
            cin>>arr[row][col];
        }
    }

    RowWiseSum(arr, 3,3);
}