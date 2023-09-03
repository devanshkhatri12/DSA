#include<iostream>
using namespace std;


void Fibonacci(int n)
{
    int n1 =0;
    int n2 =1;
    int nextterm =0;
    for(int i=1; i<=n; i++)
    {
        cout<<n1;
        nextterm = n1 +n2;
        n1 = n2;
        n2 = nextterm;
        
    }
}

int main()
{
    int n;
    cout<<"Enter number"<<endl;
    cin>>n;

    Fibonacci(n);
}