#include<iostream>
using namespace std;
int main(){
    // absolute 
    int x;
    cout<<"Enter Number:"<<endl;
    cin>>x;
    if(x<0)
    {
        x=-x;
    }
    
    cout<<"x= "<<x;
    return 0;
}