#include<iostream>
#include<memory>
using namespace std;
class rectangle
{
public:
    int length,breadth;
    rectangle(int i,int j)
    {
       length=i;
       breadth=j;
    }
    int area()
    {
        return length*breadth;
    }
};

int main()
{
    unique_ptr<rectangle>p(new rectangle(10,20));
    cout<<p->area()<<endl;

    unique_ptr<rectangle>p2;
    p2=move(p);
    cout<<p2->area()<<endl;


    return 0;
}
