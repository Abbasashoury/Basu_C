#include <iostream>
// check array is sort?
using namespace std;
bool check_sort(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]>a[i+1])
        return false;
    }
    return true;
}
int main(){
    const int n=10;
    int A[n];
    for(int i=0;i<10;i++)
    {
        cout<<"Enter A["<<i<<"]:";
        cin>>A[i];
    }
        
   
    
    bool res=check_sort(A,n);
    if(res)
       cout<<"Sorted";
    
    else
       cout<<"Not Sorted";

    
    return 0;
}