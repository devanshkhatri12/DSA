#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num = 5;
    int *p = &num;

    // it store num value
    cout<<" value of num "<<num<<endl;
    cout<<" value of *p "<<*p<<endl;
    // it store num addres
    cout<<" value of p "<<p<<endl;
    cout<<" value of &num "<<&num<<endl;


    // BAD PRACTICE -> it pointing to some garbage value
    int *q;
    cout<<q<<endl;

    // you can also pass like this
    int i =5; 
    int *z = 0;
    z = &i;

    // it store  value
    cout<<" value of i "<<i<<endl;
    cout<<" value of *z "<<*z<<endl;
    // it store  addres
    cout<<" value of z "<<z<<endl;
    cout<<" value of &i "<<&i<<endl;

    // copy pointer to another pointer
    int *x = z;
    cout<< z <<"_"<<x<<endl;
    cout<<*z<<"_"<<*x<<endl;


    // Airthmetic operation -> IMP. CONCEPT
    int a= 3;
    int *b = &a;
    cout << (*b) <<endl;
    cout << *b++ <<endl;
    cout << (*b) <<endl;         // dought ❌

    cout<<" before b "<<b <<endl;
    b =b+1;                      // it increase by 4 byte bcz it store the int value
    cout<<" before b "<<b <<endl;
}