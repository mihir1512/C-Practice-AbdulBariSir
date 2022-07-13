#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    ifstream infile;
    infile.open("My.txt");

    if(!infile.is_open())
        cout<<"File Cannot Be Opened"<<endl;
     string i,j;
        int k;
            infile>>i;
            infile>>k;
            infile>>j;

       cout<<i<<endl<<j<<endl<<k<<endl;
       if(infile.eof())
            cout<<"End of  File Reached";
        infile.close();
    return 0;
}
