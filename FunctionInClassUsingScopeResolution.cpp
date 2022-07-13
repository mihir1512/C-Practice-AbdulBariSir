#include<iostream>
using namespace std;

class rectangle
{
    int length;
    int breadth;
    public:
    rectangle();

    rectangle(int a,int b);

    rectangle(rectangle &p);

    int getLength();

    int getBreadth();

    void setLength(int a);

    void setBreadth(int b);

   inline int area();

    int perimeter();
};


int main()
{
    int i=5,j=10;

    rectangle r1;

    r1.setLength(i);
    r1.setBreadth(j);

    cout<<r1.area()<<endl;
    cout<<r1.perimeter()<<endl;
    return 0;
}

rectangle::rectangle()
{
    cout<<"Rectangle Started";
}

rectangle::rectangle(int a,int b)
{
    (a>=0)?length=a:length=0;
    (b>=0)?length=b:length=0;
}

rectangle::rectangle(rectangle &p)
{
    length=p.length;
    breadth=p.breadth;
}

int rectangle::getLength()
{
    return length;
}

int rectangle::getBreadth()
{
    return breadth;
}

void rectangle::setLength(int a)
{
    length=a;
}

void rectangle::setBreadth(int b)
{
    breadth=b;
}

int rectangle::area()
{
    return length*breadth;
}

int rectangle::perimeter()
{
    return 2*(length+breadth);
}
