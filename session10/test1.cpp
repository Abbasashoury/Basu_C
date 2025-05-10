#include<iostream>
using namespace std;

int main()
{
    int x=10;
    int& xr=x;
    int& xr1=x;
    int &xr2=xr1;
    cout<<"X:"<<x<<"  &X:"<<&x<<"  Xr:"<<xr<<" &xr:"<<&xr;
     xr++;
    int* p=&x;
    cout<<endl;
    cout<<"  p:"<<p<<"\t &p:"<<&p<<"  *p:"<<*p; 
     
    cout<<endl;
    cout<<endl;
    return 0;
}