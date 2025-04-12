#include <iostream>
using namespace std;
int main(){
    //sum  1 to n
    int n;
    cout<<"Enter one Number:";
    cin>>n;
    int i=1,sum=0;
    while(i<=n)
    {
        sum +=i++;
        
    }
    cout<<"Sum="<<sum;
    return 0;
}