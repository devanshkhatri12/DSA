#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter size"<<endl;
    cin>>n;

int i=1;
while(i <= n)
{
// space triangle
    int space = n-i;
    while(space)
    {
        cout<<" ";
        space--;
    }

// 1st triangle
    int j=1;
    while(j <= i)
    {
        cout<<j;
        j++;
    }

// 2rd triangle
    int start =i-1;
    while(start)
    {
        cout<<start;
        start--;
    }

    cout<<endl;
    i++;
}


}



//    1
//   121
//  12321
// 1234321