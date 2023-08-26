#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter numbers"<<endl;
    cin>>a>>b>>c;

    if(a>b)
    {
        if(a>c)
        {
            cout<<"A is grater "<<endl;
        }
        else
        {
            cout<<"C is grater "<<endl;
        }
    }
    else
    {
        if(b>c)
        {
            cout<<"B is greater "<<endl;
        }
        else
        {
            cout<<"C is greater "<<endl;
        }
    }

}