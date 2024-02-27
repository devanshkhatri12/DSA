#include<iostream>
using namespace std;

class Shape 
{
    private:
    int height;
    int base;
    int side;

    public:
    void set(int height, int base, int side)
    {
        this->height = height;
        this->height = height;
        this->side = side;
    }

    int get(int height, int base, int side)
    {
        return height;
        return base;
        return side;
    }
};

class Rectangle : public Shape 
{
    public:
    void Area(int height , int base)
    {
        cout<<"Area of Rectangle "<<(height * base)<<endl;
    }
};

class Square : public Shape 
{
    public:
    void Area(int side)
    {
        cout<<"Area of Square "<<(side * side)<<endl;
    }
};

int main()
{
    Rectangle a;
    a.Area(2,5);

    Square b;
    b.Area(5);
}