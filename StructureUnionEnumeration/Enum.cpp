#include<bits/stdc++.h>
using namespace std;

int main()
{
    enum Gender {Male , Female};

    Gender person = Male;

    switch (person)
    {
    case Male:
        cout<<"HE is a great person"<<endl;
        break;

    case Female:
        cout<<"SHE is a great person"<<endl;
    
    default:
        cout<<"Not to specify"<<endl;
        break;
    }

    return 0;
}