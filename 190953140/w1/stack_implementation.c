#include<iostream>
using namespace std;
class stack{
public:	int top;
	int s[20];
	stack()
	{
		top=-1;
	}
	void push(int item)
	{
		if(top == stacksize-1)
		{
			cout<<"overfloww";
			return;
		}
		else
		{
			s[++top]=item;
		}
	}
	char pop()
		{
			if(top == -1)
			{
				cout<<"underflow";

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
				cout<<s[i];

			}
		}
};
