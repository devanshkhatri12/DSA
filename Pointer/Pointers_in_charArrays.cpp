#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {1,2,3,4,5};
    char ch[6] = "abcde";        // -> null char bhi store hoga toh 1 index memory m jada lenge

    // implementation of "cout" is diff. for char array vs int array
    cout<<arr<<endl;      // -> print first block addres
    cout<<ch<<endl;      // ->  print whole string before null char

    int *a = &arr[0];
    char *c = &ch[0];

    cout<<a<<endl;      // -> print adress
    cout<<c<<endl;      // -> print whole string


    // both print first value
    cout<<*a<<endl;
    cout<<*c<<endl;

    char temp= 'z';
    char *p = &temp;          //-> BTS-> "zabcd\0"

    cout<<p<<endl;      // -> it print until it find null char 


    char chr[6] = "abcde";
    char *c1 = "abcde";        // RISKY -> DON'T DO THIS

    cout<<chr<<endl;
    cout<<c1<<endl;        // it gave error bt print it also
}