#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter size"<<endl;
    cin>>n;

    int i=1;
    while(i<= n)
    {
        int j=1;
        while(j < i)
        {
            cout<<" ";
            j++;
        }
        int number =n-i+1;
        while(number)
        {
            cout<<i;
            number--;
        }
        cout<<endl;
        i++;
    }
}





// 1111
//  222
//   33
//    4