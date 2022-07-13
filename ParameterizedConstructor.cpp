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

    rectangle(int i=0, int j=0)
    {
            (i>=0) ?(length=i):(length=0);
            (j>=0) ?(breadth=j) :( breadth=0);
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
    rectangle r1(10,5);


    int area=r1.area();

    cout<<area;

    return 0;
}
