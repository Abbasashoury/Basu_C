#include<iostream>
using namespace std;
int main()
{
    //fibonachi fn=fn-1+fn-2
    long bound;
    cout<<"Enter a positive number:";
    cin>>bound;
    cout<<" Fibonacci numbers<"<<bound<<":\n 0,1";
    long f0=0,f1=1;
    while(true)
    {
        long f2=f0+f1;
        if(f2>bound)
        break;
        cout<<","<<f2;
        f0=f1;
        f1=f2;
    }
    return 0;
}