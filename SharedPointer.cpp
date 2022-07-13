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
    shared_ptr<rectangle>p1(new rectangle(20,30));
    cout<<p1->area()<<endl;
    shared_ptr<rectangle>p2;
    p2=p1;
    cout<<p2->area()<<endl;
    cout<<p1.use_count();



    return 0;
}
