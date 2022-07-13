#include<iostream>
using namespace std;


int main()
{

    int a[2][3]={{1,2,3},{4,5,6}};

    for(auto &x:a)
    {
        for(auto &y:x)
        {
            cout<<y<<endl;

        }
    }

    cout<<a[1][2];
    return 0;
}
