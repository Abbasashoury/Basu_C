#include<iostream>
using namespace std;
int main(){
    // area and premeter of circle
    
    float r,s,m;
    const float pi=3.14;
    cout<<"Enter Radius:"<<endl;
    cin>>r;
    s=r*r*pi;
    m=2*pi*r;
    cout<<"area is: "<<s<<endl;
    cout<<"premeter is: "<<m<<endl;
    
    return 0;
}