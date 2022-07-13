#include<iostream>
using namespace std;

class car
{
public:
    virtual void start()=0; /*Pure Virtual Function.  Must be overrided in derived class*/
    virtual void stop()=0;
};
class altroz:public car
{
public:
    void start()
    {
        cout<<"Altroz Started"<<endl;
    }
    void stop()
    {
        cout<<"Altroz Stopped"<<endl;
    }
};

class innova:public car
{
    void start()
    {
        cout<<"Innova started"<<endl;
    }
    void  stop()
    {
        cout<<"Innova Stopped"<<endl;
    }
};

int main()
{

    car *p=new altroz;
        p->start();
        p->stop();

        p=new innova;
        p->start(); /*Same Statement but Function Called Are Different is Called Runtime Polymorphism*/
        p->stop();
    return 0;
}
