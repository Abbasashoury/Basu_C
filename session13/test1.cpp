#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string line;
    int c=0;
    ifstream file("example.txt",ios::in);
    while(getline(file,line))
    {
        cout<<line<<endl;
        c++;
    }
    cout<<"this file has "<< c <<" line";
    return 0;

}