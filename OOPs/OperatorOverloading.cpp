#include<iostream>
using namespace std;

// program to overload Unary Operator
class A
{
    public:
    int num = 5;

    public:
    void operator++()
    {
        num  = num + 2;
    }

    void print()
    {
        cout<<"The result is : "<<num<<endl;
    }
};

// program to overload Binary Operator
class B
{
    public:
    int x;

    B(){}

    B(int i)
    {
        x = i;
    }


    void operator+(int x)
    {
        int m = x + x;
        cout<<"The result is "<<m<<endl;
    }
};

int main()
{
    A a;
    ++a;
    a.print();

    B b;
    +b(5);
}