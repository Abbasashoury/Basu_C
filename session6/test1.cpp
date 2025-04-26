#include<iostream>
using namespace std;
int main()
{
    int a[5];
    int b[]={45,7,8};
    int c[5]={5,8,3};
    int w[5];
    // set data for array
    for(int i=1;i<6;i++)
    a[i-1]=i;
    //write array
    for(int i=0;i<5;i++)
    cout<<"a["<<i<<"]:"<<a[i]<<endl;
    return 0;

}