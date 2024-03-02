#include<iostream>
using namespace std;
class A
{
    public:
    virtual void Display()
    {
        cout<<"Base class function Invoked"<<endl;
    }
};

class B : public A 
{
    public:
    void Display()
    {
        cout<<"Derived class function Invoked"<<endl;
    }
};


int main()
{
    A *a;    // pointer of base class
    B b;     // object of derived class

    a = &b;

    a->Display();   //late binding Occurs
    // we can't access dervied function using base class pointer if can't make it virtual function   

}