#include<iostream>
using namespace std;

class rectangle
{
    int length;
    int breadth;


public:
    rectangle()
    {
        cout<<"Rectangle Started"<<endl;
    }
   void setLength(int a)
    {
        length=a;
    }

    void setBreadth(int b)
    {
        breadth=b;
    }

    int getLength()
    {
        return length;
    }

    int getBreadth()
    {
        return breadth;
    }

    int area()
    {
        return length*breadth;
    }

    int perimeter()
    {
        return 2*(length+breadth);
    }

};

int main()
{
    rectangle r1;
    r1.setLength(5);
    r1.setBreadth(10);

   int area =r1.area();

   cout<<"Area is :"<<area;

    return 0;
}
