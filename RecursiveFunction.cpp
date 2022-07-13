#include<iostream>
using namespace std;

void sum(int i)
{
    if(i>=0){

    cout<<i--;
    sum(i);
    }

}

int main()
{
    int i;
    cin>>i;



    sum(i);

    return 0;
}

