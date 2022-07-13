#include<iostream>
using namespace std;

class base
{

public:

    virtual void fun(){
    cout<<"Function of Base"<<endl;
    }

     void temp()
    {
        cout<<"ddd"<<endl;
    }

};

class derived:public base
{

public:
    void fun(){
    cout<<"Function of Derived"<<endl;
    }


};

int main(){

base *p;
derived d;
p=&d;

p->temp();

return 0;
}
