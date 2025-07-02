#include<iostream>
using namespace std;
struct Student{
    string name;
    int id;
    float avg;
};
void input(Student* A)
{
   getline(cin,A->name);
   cin>>A->id;
   cin>>A->avg;
   cin.ignore(); 
}

void print(Student* A)
{
    cout<<A->name<<"\t"<<A->id<<"\t"<<A->avg<<endl;
}
Student find_max(Student* A,int s)
{
    Student* max=&A[0];
    for(int i=1;i<s;i++)
    {
        if(A[i].avg>max->avg)
        max=&A[i];
    }
    return *max;
}

 int main(){

    Student* students=new Student[3];

    for(int i=0;i<3;i++)
    {
        cout<<"Enter information for Student "<<i+1<<" :";
        input(&students[i]);
    }

     for(int i=0;i<3;i++)
    {
        cout<<" information for Student "<<i+1<<" :";
        print(&students[i]);
    }

  Student expensive=find_max(students,3);

  cout<<"Student with maximum averid:";
  
   print(&expensive);
   delete[] students;
    return 0;
 }