#include<iostream>
using namespace std;

int main()
{
    pair<int,string> p;
    // p= make_pair(1,"abc");    //or u can write like this
    p = {1,"abc"};

    cout<<p.first <<" "<<p.second<<endl;

    pair<int,string> p1;
    p1 =p;

    cout<<p1.first <<" "<<p1.second<<endl;

    pair<int,string>  &p2 = p;
    p2 ={3,"abcd"};

    cout<<p2.first <<" "<<p2.second<<endl;
    cout<<p.first <<" "<<p.second<<endl;     // p m p2 ki values aajayegi
    


    pair<int,int> pi_array[3];
    pi_array[0] = {1,2};
    pi_array[1] = {3,4};
    pi_array[2] = {5,6};

    for(int i=0; i<3; i++)
    {
        swap(pi_array[i].first, pi_array[i].second);
        cout<<pi_array[i].first<<" "<<pi_array[i].second<<endl;
    }
}