#include<iostream>
using namespace std;

void doublePointer(int **p2)
{
    // Is there any change -> no
    // p1 = p1+1;
    
    // Is there any change -> yes
    // *p2 = *p2+1;

    // Is there any change -> yes
    **p2  = **p2+1;

}

void singlePointer(int p1)
{
    // Is there any change -> yes
    p1 =p1+1;
}

int main()
{
    int i=5;
    int *p1 =&i;
    int **p2 = &p1;

    cout<<"before "<<p1<<endl;
    singlePointer(*p1);
    cout<<"after "<<p1<<endl;



    cout<<endl<<endl;
    cout<<"Before "<<endl;
    cout<<i<<endl;
    cout<<p1<<endl;
    cout<<p2<<endl;

    doublePointer(p2);

    cout<<endl<<endl;
    cout<<"After "<<endl;
    cout<<i<<endl;
    cout<<p1<<endl;
    cout<<p2<<endl;


}