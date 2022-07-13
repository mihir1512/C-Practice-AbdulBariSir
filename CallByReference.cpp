#include<iostream>
using namespace std;
void swap(int &a, int &b)
{
   int temp =a;
    a=b;
    b=temp;

}

int main()
{
    int i,j;

    cin>>i>>j;

    swap(i,j);

    cout<<i<<j;
    return 0;
}

