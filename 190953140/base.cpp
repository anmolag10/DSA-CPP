#include<iostream>
#include "stackimp.h";
#include<string.h>
using namespace std;
int main()
{
    int base;int num,cpy;
    cout<<"Enter the base"<<endl;
    cin>>base;
    cout<<"Enter the number"<<endl;
    cin>>num;
    cpy=num;
    stackimp stk;

    while(cpy>0)
    {
        stk.push(cpy%base);
        cpy=cpy/base;
    }

    cout<<"The Converted number";
    while(!stk.isempty())
    {   if(base==16)
     {
         switch(stk.peak())
         {
         case 10:
            cout<<"A";
            break;
         case 11:
            cout<<"B";
            break;
         case 12:
            cout<<"C";
            break;
         case 13 :
            cout<<"D";
            break;
         case 14 :
            cout<<"E";
            break;
         case 15:
            cout<<"F";
            break;
        default : cout<<stk.peak();

         }
     }
     else {
        cout<<stk.peak();

     }
        stk.pop();
    }
}
