#include<iostream>
using namespace std;

void print(int n)
{
    // base case
    if(n ==0)
    {
        return ;
    }

    cout<<n<<endl;    // -> print in decending order

    print(n-1);

    cout<<n<<endl;   // -> print in assending order
}

int main()
{
    int n;
    cin>>n;

    print(n);
}