#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;

    try
    {
        if(b==0)
            throw 101;

        cout<<a/b<<endl;


    }
     catch(int s)
    {
        cout<<s<<endl;
    }

}
