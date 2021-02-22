#include<iostream>
#include <cstring>
#include<stdio.h>
using namespace std;

class student {
 public:
    char name[10];
    long rollno;
    char grade;


 void get(student s[], int n)
 {
     for( int i =0; i<n;i++)
     {
      cout<<"Enter name:";
      cin>>s[i].name;
      fflush(stdin);
      cout<<"Enter Roll:";
      cin>>s[i].rollno;
      cout<<"Enter Grade:";
      fflush(stdin);
      cin>>s[i].grade;
      fflush(stdin);

     }
 }
    display( student s[], int n)
    {
        for(int i=0; i<n;i++)
        cout<<"Roll No:"<<s[i].rollno<<" Name:"<<s[i].name<<" Grade:"<<s[i].grade<<endl;
    }

void rollsort( student s[],int n)
{  long roll_cpy;
   char name_cpy[100];
   char g_cpy;
    for( int i=0;i<n;i++)
    {
        for( int j=0; j<n-i-1;j++)
        {
            if(s[j].rollno>s[j+1].rollno)
            {
               roll_cpy=s[j].rollno;
               strcpy(name_cpy,s[j].name);
               g_cpy= s[j].grade;
               s[j].rollno=s[j+1].rollno;
               strcpy(s[j].name,s[j+1].name);
               s[j].grade=s[j+1].grade;
               s[j+1].rollno=roll_cpy;
               strcpy(s[j].name,name_cpy);
               s[j].grade=g_cpy;
               cout<<"here";

            }
        }
    }
}
};

int main()
{
    student ob[10], t;
    t.get(ob,2);
    t.display(ob,2);
    t.rollsort(ob,2);
    t.display(ob,2);



}
