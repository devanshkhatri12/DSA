#include<iostream>
using namespace std;

class Animal
{
    public:
    void sound()
    {
        cout<<"Animal sounds like"<<endl;
    }
};

class Pig : public Animal
{
    public:
    void sound()
    {
        cout<<"Pig sounds like Wee Wee !"<<endl;
    }
};

class Dog : public Animal
{
    public:
    void sound()
    {
        cout<<"Dog sounds like Bow Bow"<<endl;
    }
};

int main()
{
    Animal a;
    Pig mypig;
    Dog mydog;

    a.sound();
    mypig.sound();
    mydog.sound();

}