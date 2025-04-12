#include <iostream>
using namespace std;
int main(){
    // divisor of n
    int n;
    cout<<"Enter one Number:";
    cin>>n;
    int i=1;
    while(i<=n)
    {
        if(n%i==0)
        {
            cout<<i<<"\t";
        }
        i++;
    }
        return 0;
}