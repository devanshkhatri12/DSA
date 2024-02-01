#include<iostream>
using namespace std;

int power(int n)
{
    // Base case
    if(n == 0)
    return 1;

    // recursive relation
    int smallerprblm  = power(n-1);
    int biggerprblm = 2 * smallerprblm;

    return biggerprblm;
}

int main()
{
    int n;
    cin>>n;

    int result = power(n);

    cout<<"2 ki power"<<n<<" is "<<result<<endl;
}