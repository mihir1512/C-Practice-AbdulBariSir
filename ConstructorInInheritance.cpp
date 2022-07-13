#include<iostream>
using namespace std;

class rectangle
{
    public:
    rectangle()
    {
        cout<<"Default of Base"<<endl;
    }

    rectangle(int j)
    {
        cout<<"Param Of Base"<<endl;
    }



};

class cuboid:public rectangle
{
    public:
    cuboid()
    {
        cout<<"Default of Derived"<<endl;
    }
    cuboid(int i, int j)
    {
        cout<<"Param of Derived"<<endl;
    }
};
int main()
{
    cuboid c1(10,5);
return 0;
}
