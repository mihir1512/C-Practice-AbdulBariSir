#include<iostream>
using namespace std;

int main()
{
    int i=10;
    int j=20;
    int k=30;

 /* [i,j](){cout<<i<<"\n"<<j;}(); */

 /* auto f= [i,j](){cout<<i<<"\n"<<j;};
  f(); */

  /*[&i,&j](){cout<<i++<<"\n"<<++j;}();*/

   /* int p=[](int i,int j)->int{return i+j;}(i,j);
    cout<<p;*/

    [&](){cout<<i<<endl<<j<<endl<<k;}();
    return 0;
}
