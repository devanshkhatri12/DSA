#include<iostream>
using namespace std;

void Update1(int n)   // Pass by value
{
    n++;
}

void Update2(int& n)   // Pass by refrence
{
    n++;
}

// RISKY GAME -> DON'T DO THIS
int& print(int n)
{
    int i = n;
    int& ans = i;
    return ans;
}

int main()
{
    int n=5;

// Pass by value -> NO change
    cout<<"Before "<<n<<endl;
    Update1(n);
    cout<<"After "<<n<<endl;

// Pass by refrence -> Change
    cout<<"Before "<<n<<endl;
    Update2(n);
    cout<<"After "<<n<<endl;

// Don't do this
    cout<<"Before "<<n<<endl;
    print(n);
    cout<<"After "<<n<<endl;
}