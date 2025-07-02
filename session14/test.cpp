#include<iostream>
using namespace std;
struct student{
    string name;
    float avg;
} s1,s2;

int main(){
    student s3;
   cout<<"enter name for student 1:";
   cin>>s1.name;
   cout<<"avg student1:";
   cin>>s1.avg;
   cout<<"enter name for student 2:";
   cin>>s2.name;   
   cout<<"avg student2:";
   cin>>s2.avg;
   cout<<endl;
   cout<<s1.name<<"\t"<<s1.avg<<"\t"<<s2.name<<"\t"<<s2.avg;
    return 0;
}