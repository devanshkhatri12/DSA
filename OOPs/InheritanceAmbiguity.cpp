#include<iostream>
using namespace std;

class A
{
    public:
    void func()
    {
        cout<<"I am from class A"<<endl;
    }
};

class B
{
    public:
    void func()
    {
        cout<<"I am from class B"<<endl;
    }
};

class C : public A , public B
{
    public:
    // void func()
    // {
    //     cout<<"I am from class c"<<endl;              // -> if we override func definition then it execute first self class
    // }
};


int main()
{
    C ob1;

    ob1.B::func();                          // -> otherwise wehave to execute it like this
}