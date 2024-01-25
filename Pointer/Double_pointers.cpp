#include<iostream>
using namespace std;

int main()
{
    int i =5;
    int *p1 = &i;
    int **p2 = &p1;

    cout<<i<<endl;
    cout<<*p1<<endl;
    cout<<**p2<<endl;

    cout<<&i<<endl;    //print address of i
    cout<<p1<<endl;    //print address of i
    cout<<p2<<endl;   // print address of p1


    cout<<&p1<<endl;    //print address of p1
    cout<<&p2<<endl;    //print address of p2

    // char c ='a';
    // int *x = &c;     -> ERROR


    int x= 5;
    // char *c = &x;    -> ERROR
    // int **ch = &c;   -> ERROR



}