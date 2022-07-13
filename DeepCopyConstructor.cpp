#include<iostream>
using namespace std;

class rectangle
{
    int length;
    int breadth;


public:
     int *p;
    rectangle(rectangle &rect)
    {
        length=rect.length;
        breadth=rect.breadth;

        p=new int[5];

        rect.setLength(2);

    }

     rectangle(int i)
    {

        p=new int[5];
    }
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
        rectangle r1(0);

        r1.setLength(10);
        r1.setBreadth(5);

        rectangle r2(r1);

        cout<<r2.getLength()<<endl;
        cout<<r2.getBreadth()<<endl;
        cout<<r1.getLength()<<endl;
        cout<<r1.area()<<endl;
        cout<<r2.area()<<endl;

        cout<<r1.p<<endl;
        cout<<r2.p<<endl;

    return 0;
}
