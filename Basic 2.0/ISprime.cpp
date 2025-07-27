#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(int n)
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

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) return false;
    }
    return true;
}


bool isPrime(int num) {
    if (num <= 1) return false;
    if (num <= 3) return true;
    if (num % 2 == 0 || num % 3 == 0) return false;
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) return false;
    }
    return true;
}

int main()
{
    int n;
    cout<<"enter number"<<endl;
    cin>>n;

    if(isPrime(n))
    {
        cout<<"PRIME number"<<endl;
    }
    else
    {
        cout<<"NOT a PRIME number"<<endl;
    }
}