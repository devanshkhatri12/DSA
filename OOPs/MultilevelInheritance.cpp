#include<iostream>
using namespace std;

// base class
class Parent
{
    public:
    void MyParent()
    {
        cout<<"Parent class function"<<endl;
    }
};

// derived class
class Child : public Parent
{
    public:
    void MyChild()
    {
        cout<<"Child class function"<<endl;
    }
};

// derived class
class GrandChild : public Child
{
    public:
    void MyGrandChild()
    {
        cout<<"GrandChild clas function"<<endl;
    }
};

int main()
{
    GrandChild me;
    
    me.MyParent();
    me.MyChild();
    me.MyGrandChild();
}