#include <iostream>
using namespace std;
int main(){
    int n = 10, *p;
    p = &n;
    cout <<"n :"<< n <<"\t &n:"<<&n <<endl;
    cout <<"p :"<<  p <<"\t &p:" << &p <<"\t *p:" << *p <<endl;
    *p += 10;
    cout <<"n :"<<n<<endl;

    n -= 2;
    cout <<"*p :"<<*p<<endl;
    return 0;
}
