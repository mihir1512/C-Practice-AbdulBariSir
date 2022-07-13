#include<iostream>
using namespace std;

int main()
{
    int n,m;

    cout<<"Enter Size Of Matrix1";
    cin>>n>>m;
    int a[n][m];

    int p,q;
    cout<<"Enter size of Matrix2";
    cin>>p>>q;
    int  b[p][q];

    if(m==p)
    {
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {

                cout<<"Enter a"<<i<<j<<":   ";
                cin>>a[i][j];
                cout<<endl;
            }
        }

        for(int i=0; i<p; i++)
        {
            for(int j=0; j<q; j++)
            {

                cout<<"Enter b"<<i<<j<<":   ";
                cin>>b[i][j];
                cout<<endl;
            }
        }

        int s[n][q];

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<q; j++)
            {
                int t=0;
                for(int k=0; k<m; k++)
                {


                    t=t+(a[i][k]*b[k][j]);
                }
                s[i][j]=t;
            }
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<q;j++)
            {
                cout<<s[i][j]<<endl;

            }
        }
    }
    else
    {

        cout<<endl<<"Multiplication s not Possible";
    }


}

