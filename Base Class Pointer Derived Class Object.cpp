#include<iostream>
using namespace std;

class base
{

public:
    base(){
    cout<<"Constructor of base"<<endl;
    }

    void fun(){
    cout<<"fun of Base";
    }
};

class der:public base
{
public:


    der();
    void fun(){
    cout<<"fun of Derived";
        }
};

der::der( ){

cout<<"constructor of derived"<<endl;
}

int main(){

    base k;

    k.fun();



  /* base *p=&k;

    p->fun();*/

    return 0;
}
