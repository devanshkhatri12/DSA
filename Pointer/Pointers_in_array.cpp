#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int arr[10] = {2,5,7};

    cout<<"Address of arr "<<&arr<<endl;       //--> pointing to first block address
    cout<<"Address of arr "<<arr<<endl;        //--> pointing to first block address
    cout<<"Address of arr "<<*arr<<endl;       //--> pointing to first block value
    cout<<"Address of arr "<<(arr+1)<<endl;    //--> pointing to second block addres
    cout<<"Address of arr "<<*(arr+1)<<endl;   //--> pointing to second block value
    cout<<"Address of arr "<<(*arr)+1<<endl;   //--> pointing to first block value and increased it by so it beacome 3

    // Both print the same output
    cout<<"value at adrress "<<*(arr+2)<<endl;
    cout<<"value at adrress "<<arr[2]<<endl;

    // the meaning of this is also same
    int i=2;
    cout<<arr[i]<<" "<<*(arr+i)<<endl;
    cout<<i[arr]<<" "<<*(i+arr)<<endl;

    // Differnce b/w Array and Pointer
    int temp[10];               // 4*10 = 40
    cout<<sizeof(temp)<<endl;
    cout<<sizeof(&temp)<<endl; // size is 4 bcz it store int value and it pointing to first index

    int *p = &temp[0];         // size of pointer addressing value is int so size is 4
    cout<<sizeof(p)<<endl;
    cout<<sizeof(*p)<<endl;
    cout<<sizeof(&p)<<endl;

    // Symbol table 
    int a[10] = {1,2,3};
    // a = a+1;    -> error

    int *x = &a[0];

    cout<<*x<<endl;      // -> pointing to first block value

    x = x+1;
    cout<<*x<<endl;     // -> pointing to second block value
}