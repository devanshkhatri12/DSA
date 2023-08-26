#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter size"<<endl;
    cin>>n;


    int i=1, count=1;
    while(i <= n)
    {
        int num =n-i;
        while(num)
        {
            cout<<" ";
            num--;
        }
        int j=1;
        while(j <= i)
        {
            cout<<count;
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }
}

//    1
//   23
//  456
// 78910