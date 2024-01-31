#include<iostream>
using namespace std;

int score = 100;    // -> global variable ->  bad pratice -> bcz if we change if affect all the places

void a(int& i)
{
    cout<<"inner a "<<i<<endl;
    cout<<"score inner a is "<<score<<endl;
}

void b(int& i)
{
    cout<<"inner b "<<i<<endl;
    score = score + 1;
    cout<<"score inner b is "<<score<<endl;
}

int main()
{
    int i=5;        // -> local variable
    cout<<"inner main "<<i<<endl;
    cout<<"score inner main is "<<score<<endl;
    b(i);
    a(i);
}