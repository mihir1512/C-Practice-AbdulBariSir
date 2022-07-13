#include<iostream>
using namespace std;

class MyException:public exception
{
public:

};

int main()
{
    try
    {
        throw MyException();
    }
    catch(MyException c)
    {
        cout<<c.what();
    }
    return 0;
}
