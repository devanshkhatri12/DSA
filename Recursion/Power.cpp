#include<iostream>
using namespace std;

int Power(int a, int b)
{
    // basecase
    if(b == 0)
    return 1;

    if(b == 1)
    return a;

    // processing
    int ans = Power(a, b/2);

    // recursive relation
    if(b%2 == 0)
    {
        return ans * ans;          // b is even
    }
    else
    {
        return a * ans * ans;     // b is odd
    }
}
int main()
{
    int a , b;
    cin>>a>>b;

    int ans = Power(a, b);

    cout<<"Power is "<<ans<<endl;
}