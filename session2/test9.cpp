#include<iostream>
using namespace std;
int main(){
    //  simple claculator
    float a,b;
    char c;
    cout<<"Enter two Number:"<<endl;
    cin>>a>>b;
    cout<<"Enter operator:[+,-,*,/]"<<endl;
    cin>>c;
    switch (c)
    {
    case '+':
        cout<<a+b<<endl;
        break;
    case '-':
        cout<<a-b<<endl;
        break;
    case '*':
        cout<<a*b<<endl;
        break;
    case '/':
        cout<<a/b<<endl;
        break;    
    default:
       cout<<"operator invalid";
        break;
    }
    
    return 0;
}