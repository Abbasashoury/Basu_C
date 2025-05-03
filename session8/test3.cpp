#include <iostream>

using namespace std;
//Union of two ordered arrays
int main(){

    int a[]={6,7,8,19,40};
    int b[]={1,2,3,5};
    int s1=sizeof(a)/sizeof(a[0]);
    int s2=sizeof(b)/sizeof(a[0]);
    int c[s1+s2]  ;
    int i=0,j=0,k=0;
    while(i<s1 && j<s2)
    {
        if(a[i]<b[j])
            c[k++]=a[i++];
        else
            c[k++]=b[j++];
    } 
    while (i<s1)
        c[k++]=a[i++];
    while (j<s2)
        c[k++]=a[j++];
    
    for (i=0;i<k;i++)
        cout<<" "<<c[i];
    return 0;
}