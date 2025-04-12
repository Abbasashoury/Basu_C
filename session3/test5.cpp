#include <iostream>
using namespace std;
int main(){
    //fact(n)
    int n;
    cout<<"Enter one Number:";
    cin>>n;
    int i=1,fact=1;
    while(i<=n)
    {
        fact *=i;
        i++;
        
    }
    cout<<"fact("<<n<<")= "<<fact;
    return 0;
}