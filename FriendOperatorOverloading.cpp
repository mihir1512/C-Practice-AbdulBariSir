#include<iostream>
using namespace std;

class complex
{
public:
    int real;
    int img;

    friend complex operator+(complex c1,complex c2);

};

complex operator+(complex c1,complex c2)
{
    complex t;
    t.real=c1.real+c2.real;
    t.img=c1.img+c2.img;
    return t;
}

int main()
{
    complex c1,c2,c3;

    c1.real=3;
    c1.img=4;
    c2.real=5;
    c2.img=6;

   c3=c1+c2;

   /*c3=operator+(c1,c2);*/

    cout<<c3.real<<endl;
    cout<<c3.img<<endl;
    return 0;
}
