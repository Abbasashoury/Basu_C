#include <iostream>
using namespace std;


int main(){
    const int size=10;
    int a[size];
    int s=0,e=size-1,x;
    for (int i=0;i<size;i++)
    {
       
        cout<<" Enter a["<<i<<"]:";
        cin>>x;
        if(x%2)
        a[s++]=x;
        else
        a[e--]=x;

    }
        
for (int i=0;i<s;i++)
    {
        cout <<" "<<a[i];
    } 
    for (int i=size-1;i>e;i--)
    {
        cout <<" "<<a[i];
    }  
    return 0;
}