#include<iostream>
using namespace std;

class A
{
    public:
    virtual void display() = 0;
};

class B : public A
{
    public:
    void display()
    {
        cout<<"Derived class function invoked"<<endl;
    }
};

int main()
{
    A *a;
    B b;

    a = &b;
    a->display();
}