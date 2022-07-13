#include<iostream>
using namespace std;


int main()
{
    float a[5]={1.1,2.2,3.3,4.4,5.5};

        float *p=&a[1];
        float *q=&a[4];
  /*  cout<<*p<<endl;
    p=p+3;
    cout<<*p<<endl;*/
     int g=q-p;
    cout<<p;
    return 0;
}
