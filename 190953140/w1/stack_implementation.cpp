#include<iostream>
using namespace std;
#define stacksize 10
class stack{
public:	int top;
	int s[20];
	int max;
	stack()
	{
		top=-1;
	}
	stack(int m)
	{
	    max=m;
	    top=-1;
	}
	bool isEmpty()
	{
	    if(top==-1)
        {
            return true;
        }
        else return false;
	}
	bool isFull()
	{
	    if(top==stacksize-1)
            return true;
        else
            return false;
	}
	void push(int item)
	{
		if(isFull())
		{
			cout<<"overfloww";
			return;
		}
		else
		{
			s[++top]=item;
			cout<<"item pushed successfully"<<endl;
		}
	}
	int pop()
		{
			if(isEmpty())
			{
				cout<<"underflow";
				return 0;

			}
			else
			{
			return (s[top--]);
			}
		}
		void display()
		{
			if(top ==-1)
			{
				cout<<"stack is empty"<<endl;
			}
			else
			for(int i=top;i>=0;i--)
			{
				cout<<s[i]<<"  ";

			}
		}
		int peek()
		{
		    cout<<"element at the top is:"<<endl;
		    return s[top];
		}

};
int main(){
stack s(10);
int ele;int opt;
do{
cout<<"1.PUSH ELEMENT:"<<endl<<"2.POP ELEMENT"<<endl<<"3.isEmpty()"<<endl<<"4.isFull()"<<endl<<"5.display"<<endl<<"6.peek()"<<"-1 to exit"<<endl;
cout<<"enter the operation you want:"<<endl;

cin>>opt;
switch(opt)
{

case 1:
    cout<<"enter element to push"<<endl;
    cin>>ele;
    s.push(ele);

    break;

case 2: cout<<"popped element is:"<<s.pop()<<endl;
      break;

case 3:if(s.isEmpty())
            {
int opt;
                cout<<"stack is empty"<<endl;
            }
            else cout<<"stack is not empty"<<endl;

      break;

case 4:
    if(s.isFull())
    {

        cout<<"stack is full"<<endl;
    }
    else
        cout<<"stack is not full"<<endl;
      break;

case 5:
    cout<<"elements in the stack are:"<<endl;
    s.display();
      break;
case 6:
    cout<<"value being peeked"<<s.peek();


default: cout<<"enter valid option"<<endl;
        break;
}
}while(opt!=-1);
}
