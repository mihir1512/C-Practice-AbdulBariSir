#include<iostream>
using namespace std;

void fun(int *t)
{

    delete []t;

}

int main()
{

int *p=new int[5];


for(int i=0;i<5;i++)
    {

    cin>>p[i];
}
fun(p);

for(int i=0;i<5;i++)
{

    cout<<*p<<endl;

}

return 0;
}
