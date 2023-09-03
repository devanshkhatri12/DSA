#include<iostream>
using namespace std;

int fact(int num)
{
    int factorial =1;

    for(int i=1; i<=num; i++)
    {
        factorial = factorial *i;
    }
    return factorial;
}

int nCr(int n, int r)
{
    int numerator = fact(n);

    int denominator = fact(r) * fact(n-r);

    int ans =  numerator/denominator;

    return ans;
}

int main()
{
    int n ,r;
    cout<<"Enter value of n and r"<<endl;
    cin>>n>>r;

    cout<<"Answer is: "<< nCr(n,r) << endl;

}