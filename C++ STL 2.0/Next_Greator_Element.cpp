#include<bits/stdc++.h>
using namespace std;

vector<int> nextgreatorelement(vector<int>& v)
{
    int n= v.size();
    vector<int> nge(n,-1);
    stack<int> st;

    for(int i=2*n-1; i>=0; i--)
    {
        // check whether stack is empty or not if not then check  element of stack is lesser then our array ith element if yes then pop them all lesser element
        while(!st.empty() && st.top() <= v[i%n])
        {
            st.pop();
        }

        if(i<n)
        {
            if(!st.empty())       //if stack not empty push top elemt or nearest greater integer
            {
                nge[i] = st.top();
            }
            else          //if stack is empty push -1 
            {
                nge[i] = -1;
            }
        }
        st.push(v[i%n]);    //push ith elemt into stack 
    }
    return nge;
}

int main()
{
    vector<int> v = {2,10,12,1,11};
    vector<int> result = nextgreatorelement(v);
    
    for(int i=0; i<result.size(); i++)
    {
        cout<<result[i]<<" ";
    }
    cout<<endl;
}