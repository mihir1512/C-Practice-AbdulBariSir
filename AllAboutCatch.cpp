#include<iostream>
using namespace std;

int main()
{
    try
    {
        /*throw 1;*/
       /* throw "Exception";*/
       /* throw exception();*/
        throw 'b';
    }
    catch(int i)
    {
        cout<<i<<endl;
    }
    catch(const char* c)
    {
        cout<<c<<endl;
    }
    catch(exception t)
    {
        cout<<t.what()<<endl;
    }
    catch(...) /*Ellipse: Takes all type of Exception. It must be at last catch position*/
    {
        cout<<"General Exception"<<endl;
    }
    return 0;
}
