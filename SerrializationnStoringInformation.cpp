#include<iostream>
#include<fstream>
using namespace std;

class demo
{
public:
    int i=10;
    string st="Hello";
    int j=24;

    friend ofstream& operator<<(ofstream &o,demo &d)
    {
        o<<d.i;
        o<<d.st;
        o<<d.j;
        return o;
    }
       friend ifstream& operator>>(ifstream &o,demo &d)
    {
        o>>d.i>>d.st>>d.j;
        return o;
    }

};

int main()
{
    demo d1;
    ifstream ifs("student.txt");

    ifs>>d1;

    cout<<d1.i<<endl<<d1.st<<endl<<d1.j;
    return 0;
}
