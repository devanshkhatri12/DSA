#include<iostream>
using namespace std;


int TotalsetBits(int n)
{
    int count=0;
    int i=0;
    while(n != 0)
    {
        if(n&1 == 1)
        {
            count++;
        }
        n = n>>1;
    }
    return count;
    
}

int Countbits(int a, int b)
{
    int num1bits = TotalsetBits(a);

    int num2bits = TotalsetBits(b);

    int Total  = num1bits + num2bits;

    return Total;
}

int main()
{
    int a,b;
    cout<<"enter numbers"<<endl;
    cin>>a>>b;

    int ans = Countbits(a,b);
    cout<<"Ttoal number of 1 sets bits "<<ans<<endl;
}