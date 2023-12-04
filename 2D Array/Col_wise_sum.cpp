#include<bits/stdc++.h>
using namespace std;

void ColWiseSum(int arr[][3], int n, int m)
{
    cout<<"Print Column wise Sum"<<endl;
    for(int col=0; col<3; col++)
    {
        int sum=0;
        for(int row=0; row<3; row++)
        {
            sum += arr[row][col];
        }
        cout<<sum<<" ";
    }
    cout<<endl;
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

    ColWiseSum(arr, 3,3);
}