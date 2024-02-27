#include<iostream>
using namespace std;

class A
{
    public:
    int sum = 0;
    int Add(int a, int b)
    {
        sum = (a+b);
        return sum;
    }

    int Add(double a, double b)
    {
        sum = (a+b);
        return sum;
    }
};

int main()
{
    A a;

    cout<<"Sum of a and b is "<<a.Add(2,3)<<endl;
    cout<<"Sum of a and b is "<<a.Add(2.5,7.5)<<endl;
    
}



