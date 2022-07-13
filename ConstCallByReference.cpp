#include<iostream>
using namespace std;

void fun(const int &i,int &j)
{
    cout<<i<<endl<<++j;

}

int main()
{
  int a=10,b=20;
  fun(a,b);
  return 0;
}


