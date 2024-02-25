#include<iostream>
using namespace std;

class Employee
{
    private:
    int salary;


    public:
    void setSalary(int s)
    {
        this->salary = s;
    }

    int getSalary()
    {
        return salary;
    }

    void print()
    {
        cout<<getSalary()<<endl;
    }
};

int main()
{
    Employee Rajat;

    Rajat.setSalary(10000);
    Rajat.print();

}