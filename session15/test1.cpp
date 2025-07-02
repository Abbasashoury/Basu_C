#include<iostream>
using namespace std;
struct student{
    string name;
    int age;
    float avg;
};
void input(student& A)
{
   getline(cin,A.name);
   cin>>A.age;
   cin>>A.avg;
   cin.ignore(); 
}
student find_max(student A[],int s)
{
    student max=A[0];
    for(int i=1;i<s;i++)
    {
        if(A[i].avg>max.avg)
        max=A[i];
    }
    return max;
}
void print(student A)
{
    cout<<A.name<<"\t"<<A.age<<"\t"<<A.avg<<endl;
}
 int main(){
    student b[3];
    for(int i=0;i<3;i++)
    {
        cout<<"Enter information for student "<<i+1<<" :";
        input(b[i]);
    }
     for(int i=0;i<3;i++)
    {
        cout<<" information for student "<<i+1<<" :";
        print(b[i]);
    }
  student max=find_max(b,3);
  cout<<"student with maximum average:";
   print(max);
    return 0;
 }