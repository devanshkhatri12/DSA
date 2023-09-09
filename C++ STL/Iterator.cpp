#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v = {1,2,3,4,5};

    cout<<"printing vector elements" <<endl;
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<endl;
    }

    vector<int> ::iterator it = v.begin();

    cout<<"Printing vector elemets using iterator"<<endl;
    for(it = v.begin(); it != v.end(); it++)
    {
        cout<<(*it)<<endl;
    }









    cout<<"declaraing vector of pair"<<endl;

    vector<pair<int,int>> vp = {{1,2},{2,1},{1,2}};

    cout<<"printing element of pair of vector"<<endl;
    for(int i=0; i<vp.size(); i++)
    {
        cout<<vp[i].first<<" "<<vp[i].second<<endl;
    }

    vector<pair<int,int>> ::iterator itvp;

    cout<<"printing element of pair of vector using iterator"<<endl;
    // for(itvp = vp.begin(); itvp != vp.end(); itvp++)
    // {
    //     cout<<(*itvp).first<<" "<<(*itvp).second<<endl;
    // }

// common way of writing
    for(itvp = vp.begin(); itvp != vp.end(); itvp++)
    {
        cout<<(itvp->first)<<" "<<(itvp->second)<<endl;
    }
}