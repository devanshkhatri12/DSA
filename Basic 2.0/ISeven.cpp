#include<iostream>
using namespace std;

bool IsEven(int n)
{
    if(n&1)   //odd no.
    {
        return 0;
    }
    return 1;  //even no.
}

int main()
{
    int n ;
    cout<<"Enter value of n "<<endl;
    cin>>n;

    if(IsEven(n))
    {
        cout<<"Even number "<<endl;
    }
    else
    {
        cout<<"Odd number"<<endl;
    }
}