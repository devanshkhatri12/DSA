#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x = 7;

    try{
        if(x %2 != 0)
        {
            // throwing an exception
            throw 1;
        }
    }
    catch(int e)
    {
        cout<<"exception is caught "<<e<<endl;
    }


}