#include<bits/stdc++.h>
using namespace std;

class Handling{
    public:
        Handling(){
            cout<<"Object is created "<<endl;
        }

        ~Handling()
        {
            cout<<"Object is destroyed"<<endl;
        }
};

int main()
{
    try{
        cout<<"Inside try block "<<endl;

        Handling h;
        throw 10;

        cout<<"After throw Exception"<<endl;
    }
    catch(int e)
    {
        cout<<"Caught Exception: "<<endl; 
    }

    cout<<"after catch"<<endl;
    return 0;
}