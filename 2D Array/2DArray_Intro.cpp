#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[3][4];

    // when we want elemet at specific row
    // int arr[3][4] ={{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};

    //by default it take row wise input
    // int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};      



    // Take input -> Row wise
    for(int row=0; row<3; row++)
    {
        for(int col=0; col<4; col++)
        {
            cin>>arr[row][col];
        }
    }


    // Take input -> Column wise
    // for(int col=0; col<4; col++)
    // {
    //     for(int row=0; row<3; row++)
    //     {
    //         cin>>arr[row][col];
    //     }
    // }



    // Print array -> row wise
    for(int row=0; row<3; row++)
    {
        for(int col=0; col<4; col++)
        {
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }
}