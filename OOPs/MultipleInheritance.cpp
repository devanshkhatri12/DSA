#include<iostream>
using namespace std;

class father
{
    public:
    void myfather(string fathername)
    {
        cout<<"My father name is "<<fathername<<endl;
    }
};

class mother
{
    public:
    void mymother(string mothername)
    {
        cout<<"My mother name is "<<mothername<<endl;
    }
};

class child : public father , public mother
{
    public:
    void myname(string name)
    {
        cout<<"my name is "<<name<<endl;
    }
};

int main()
{
    child me;

    me.myname("Devansh khatri");
    me.myfather("sunil khatri");
    me.mymother("preeti khatri");
}