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

void isEven(int n)
{
    if((n /2) * 2 == n)
    {
        cout<<"EVEN"<<endl;
    }
    else{
        cout<<"ODD"<<endl;
    }
}

void isEven(int n)
{
    cout << ((n %2 == 0) ? "EVEN" : "ODD" )<<endl;
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

    isEven(n);
}