#include<iostream>
using namespace std;


class your;

class my
{
private:
    int i=10;
protected:
    int j=20;
public:
    int k=30;


    friend your;
};

class your
{
    public:
    my m1;

    your()
    {
        cout<<m1.i<<endl;
        cout<<m1.j<<endl;
        cout<<m1.k<<endl;
    }
};

int main()
{
    your y1;
    return 0;
}
