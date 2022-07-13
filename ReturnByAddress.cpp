#include<iostream>
using namespace std;

int* fun(int t)
{
    int *p=new int[t];

    for(int i=0;i<t;i++)
    {
        cin>>p[i];
    }

    return p;
}

int main()
{
    int size;

    cin>>size;

    int *pt=fun(size);

    for(int i=0;i<size;i++){

        cout<<pt[i]<<endl;
    }
    return 0;
}

