#include <iostream>

using namespace std;
int main(){
    
    char a[]={'A','B','C','D'};
    char *p=a;
    cout<<sizeof(char)<<endl;
    int size_a=sizeof(a)/sizeof(a[0]);
    char *end=a+size_a;
    cout<<"p:"<<p<<"\t end:"<<end<<endl;
     for(p;p<end;p++)
       cout<<"p:"<<p<<"\t*p:"<<*p<<endl;
    return 0;

}