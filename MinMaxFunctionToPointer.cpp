#include<iostream>
using namespace std;

int max(int x,int y)
{
    return x>y?x:y;
}

int min(int x,int y)
{
    return x<y?x:y;
}
int main()
{

    int i,j;

    cin>>i>>j;

    int (*pt) (int,int);

    pt=max;

    int max= (*pt) (i,j);
     cout<<max<<endl;

     pt=min;

     cout<<(*pt) (i,j);
    return 0;
}
