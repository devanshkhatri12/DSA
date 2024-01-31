#include<iostream>
using namespace std;

inline int getmax(int& a, int& b)      // -> no extra space for variable and function calling
{
    return (a>b) ? a : b;
}

int main() 
{
    int a =1, b=2;

    cout<<"getmax "<<getmax(a,b)<<endl;

    a = a+3;
    b = b+1;

    cout<<"getmax "<<getmax(a,b)<<endl;
}