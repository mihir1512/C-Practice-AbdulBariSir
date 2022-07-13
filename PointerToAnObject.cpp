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
    rectangle *p;
    rectangle r1; /*Object in Stack*/
    rectangle *q= new rectangle();/*Dynamic Object or Object in Heap*/
    p=&r1;
    r1.setLength(10);
    p->setBreadth(2);

    int area=p->area();

    cout<<area;

    return 0;
}
