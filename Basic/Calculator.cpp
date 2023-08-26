#include<iostream>
using namespace std;

int main()
{
    int n1,n2;
    char op;
    

    cout<<"Enter numbers"<<endl;
    cin>>n1>>n2;

    cout<<"Enteer Operator"<<endl;
    cin>>op;

switch (op)
    {
    case '+':
        cout<<"sum is: "<<n1+n2<<endl;
        break;


    case '-':
        cout<<"Difference is: "<<n1+n2<<endl;
        break;


    case '%':
        cout<<"Remainder is: "<<n1+n2<<endl;
        break;


    case '/':
        cout<<"Quotient is: "<<n1/n2<<endl;
        break;


    case '*':
        cout<<"Multiply is: "<<n1*n2<<endl;
        break;


    default:
        cout<<"Operation not Occured"<<endl;
        break;
    }
}