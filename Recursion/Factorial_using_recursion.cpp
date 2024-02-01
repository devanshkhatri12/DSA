#include<iostream>
using namespace std;

int factorial(int n)
{
    // Base case
    if(n ==0)
    return 1;

    // recursive relation
    int smallerprblm = factorial(n-1);
    int biggerprblm = n * smallerprblm;

    return biggerprblm;
}

int main() 
{
    int n;
    cin>>n;

    int result = factorial(n);

    cout<<"factorial of "<<n<<" is "<<result<<endl;

}
