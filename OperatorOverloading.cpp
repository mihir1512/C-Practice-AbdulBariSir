#include<iostream>
using namespace std;

class complex
{
    public:
    int img;
    int real;





    complex operator+(complex x)
    {
        complex t;
        t.real=real+x.real;
        t.img=img+x.img;
        return t;
    }
};


int main()
{
    complex c1,c2,c3;
    c1.real=3;
    c1.img=4;
    c2.real=5;
    c2.img=6;

    c3=c1+c2;
  /*  c3=c1.operator+(c2);*/

    cout<<c3.real<<endl;
    cout<<c3.img<<endl;
    return 0;
}
