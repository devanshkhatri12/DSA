#include<iostream>
using namespace std;

class Vehicle{
    public:
    string brand = "Ford";

    void Voice() {
        cout<<"Sounds like Ratatata "<<endl;
    }
};

class Car : public Vehicle{
    public:
    string model = "Mustang 1969";
};


int main()
{
    Car myCar;

    cout<<"My car "<<myCar.brand<<" "<<myCar.model<<endl;
    myCar.Voice();
}