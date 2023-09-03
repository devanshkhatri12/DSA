#include<iostream>
using namespace std;

bool ISprime(int n)
{
    for(int i=2; i<n; i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n;
    cout<<"enter number"<<endl;
    cin>>n;

    if(ISprime(n))
    {
        cout<<"PRIME number"<<endl;
    }
    else
    {
        cout<<"NOT a PRIME number"<<endl;
    }
}