#include<iostream>
#include "stackimp.h";
#include<string.h>
using namespace std;

int main()
{
    stackimp  s;

    char name[100];
    cout<<"Enter a string:";
    cin>>name;

    for(int i=0; name[i]!='\0';i++)
    {
        s.push((int)name[i]);

    }
int flag=0;
    for(int i=0;;i++)
    {
        if((int)name[i]==s.peak())
        {
            flag=1;
        }

        else{
            flag=0;
             break;}
        s.pop();
        if(s.isempty())
            break;

    }
    if(flag==1)
        cout<<"Palindrome";
     else
        cout<<"Not a Palindrome";
}






