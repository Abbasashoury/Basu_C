#include <iostream>
using namespace std;

void hello(string );

int main(){
    string name;
    cout<<"Enter your name:";
    cin>>name;
    hello(name);
    return 0;
}

void hello(string n){
    cout<<"Hello "<<n<<endl;
}