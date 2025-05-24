#include<iostream>
#include <cctype>
#include<cstring>
using namespace std;
int main()
{  
    char a='a'; 
    // cout<<isalpha(a)<<endl;
    // cout<<isalnum(a)<<endl;
    // cout<<isdigit(a)<<endl;
    // cout<<ispunct(a)<<endl;
    // cout<<isupper(a)<<endl;
    // cout<<islower(a)<<endl;
    // cout<<char (tolower(a))<<endl;
    // cout<<char (toupper(a))<<endl;

     char name1[10]="Alireza";
     char name2[]="mohammad";
     name1[0]='B';
     //cout<<name1<<endl;
    //<< name2<<endl;
    //name1="ahmad" ; //Error;
    // //name2="ahmad"  //Error;
    // char* const name3="alireza";
     //char * name4="mohammadreza";    
    // cout<<name3<<endl;    
    // //name3="reza"   //Error;
    // name4="reza";  //change pointer is allow  
    // cout<<name4<<endl;
    // //name4[0]='s'; //Error   Not allowed to change content of string 
    // //cout<<name4<<endl;
  
    //  cout<<strlen(name2)<<endl;

     strcpy(name2,"ahmad");
     cout<< name2 << endl;
     char family[100];
     cin.getline(family,99);

     cout<< family <<endl;
    
     int p=strcmp(name2,family);
       cout <<p<<endl;
     cout<<strcat(name2,family)<<endl;

     char* result=strstr(family,"ali");
     cout<<"result= "<< result <<endl;
     cout<<"position:" << result-family<<endl;
     string s = "Hello Ali";
     cout<<strstr(s.c_str(), "Ali");

    // cout<<endl;
    // cout<<endl;
    return 0;
}
