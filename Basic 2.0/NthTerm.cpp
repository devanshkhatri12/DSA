#include<iostream>
using namespace std;

int NthTerm(int n)
{
    return  (3 * n ) + 7;
}

int main()
{
    int n;
    cout<<"enter number"<<endl;
    cin>>n;

    int ans = NthTerm(n);

    cout<<"Nth erm of A.P is : "<<ans<<endl;
}