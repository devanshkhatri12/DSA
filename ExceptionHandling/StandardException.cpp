// Standard exceptions are the set of classes that represent different types of common exceptions.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3};

    try{

        v.at(10);

    }
    catch(out_of_range e)
    {
        cout<<"CAUGHT EXCEPTION: "<<e.what()<<endl;
    }

    return 0;
}