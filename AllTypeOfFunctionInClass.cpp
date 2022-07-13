#include<iostream>
using namespace std;

class rectangle
{
    int length;
    int breadth;


public:

    /* CONSTRUCTOR*/
    rectangle()
    {
        cout<<"Rectangle Started"<<endl;
    }
    rectangle(int a,int b)
    {
        (a>=0)?length=a:length=0;
        (b>=0)?breadth=b:breadth=0;
    }
    rectangle(rectangle &p)
    {
        length=p.length;
        breadth=p.breadth;
    }

    /*MUTATOR*/
   void setLength(int a)
    {
        length=a;
    }

    void setBreadth(int b)
    {
        breadth=b;
    }

    /*ACCESSOR*/
    int getLength()
    {
        return length;
    }

    int getBreadth()
    {
        return breadth;
    }

    /*FACILITATORS*/
    int area()
    {
        return length*breadth;
    }

    int perimeter()
    {
        return 2*(length+breadth);
    }

    /*INSPECTOR*/
    bool isSquare()
    {
        return false;
    }

    /*DESTRUCTOR*/
    ~rectangle()
    {
        cout<<"Rectangle Ended"
    }
};

int main()
{
    return 0;
}
