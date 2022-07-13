#include<iostream>
using namespace std;

void fun()
{

   static int i=5;

   cout<<i++;
}

int main()
{

fun();
fun();
fun();
    return 0;
}
