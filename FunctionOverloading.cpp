#include<iostream>
using namespace std;

int sum(int i, int j)
{
    return i+j;
}

int sum(int i, int j, int k)
{
    return i+j+k;
}

float sum(float i,float j)
{
    return i+j;
}

float sum(int i,float j)
{
    return i+j;
}
int main()
{

    cout<<sum(10,5,6);
    return 0;
}
