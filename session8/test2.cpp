#include <iostream>
// is array symmetric?
using namespace std;
void read(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<"Enter number A["<<i<<"]:";
        cin>>a[i];
    }
}
bool is_syymmetric(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]!=a[n-1-i])
        {
            return false;
        }
    }
    return true;
}
int main(){

    int a[7]={3,4,3,5,3,4,4};
    cout<<is_syymmetric(a,7)<<endl;
    cout<<is_syymmetric(a,3)<<endl;   
    return 0;
}