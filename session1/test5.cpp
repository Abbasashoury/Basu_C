#include<iostream>
using namespace std;
int main()
{
    
    int a=10;
    int b=20;
    int c;
    int x=90;
    c=++a + b++;
    b+=1;
    b=b+1;
    
    x *=10;
    cout<<"result="<<c<<endl;
    cout<<"X="<<x<<endl;
    string name,family;
    cout <<"Enter your name:"<<endl;
    cin>>name;
    cout <<"Enter your Family:"<<endl;
    cin>>family;
    cout<<"name : "<<name<<", family: "<<family;
    return 0;
}