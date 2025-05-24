#include<iostream>
#include<cstring>
using namespace std;
int main()
{ 
    char s[5]="ABCD";
    int len=strlen(s);
    cout<<"length of s:"<< len<< endl;
    for(int i=0;i<5;i++)
    {
        cout<<"s["<<i<<"]='"<<s[i]<<"'\n";
    }
    return 0;
}
