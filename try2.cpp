#include<iostream>
using namespace std;

class rectangle
{
public:
    int length,breadth;
    rectangle(int i,int j)
    {
        length=i;
        breadth=j;
    }

    void setlength(int i)
    {
        length=i;
    }

    void setbreadth(int j)
    {
        breadth=j;
    }

    int getbreadth()
    {
        return breadth;
    }
};

class cube:public rectangle
{
public:


    cube(int i,int j):rectangle(i,j)
    {

    }
    int getheight()
    {
        return 15;
    }

};


int main()
{
    rectangle r1(1,2);
    r1.setlength(10);
    cout<<r1.getbreadth();

    cube c2(5,6);
   cout<< c2.getheight();
    return 0;
}
