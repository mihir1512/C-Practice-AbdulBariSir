#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream outfile("My.txt",ios::app);
    outfile<<"Hello"<<endl;
    outfile<<456<<endl;
    outfile<<"Mihir"<<endl;
    outfile.close();

    return 0;
}

