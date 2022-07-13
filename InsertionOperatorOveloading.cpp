#include<iostream>
using namespace std;

class complex
{
public:
    int real;
    int img;

    friend ostream& operator<<(ostream &,complex x);
};

ostream& operator<<(ostream &o,complex x)
{
    o<<x.real<<"+i"<<x.img;
}
int main()
{
    complex c1;;
    c1.real=5;
    c1.img=6;

    cout<<c1;

    return 0;
}
