//program to change the base of any decimal number to given any base using stack only

#include<iostream>
#include<string.h>
using namespace std;
#define stacksize 10
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

int main()
{	stack s;
	cout<<"enter the decimal number "<<endl;
	int d;
	cin>>d;
	cout<<"enter the base into wich you want to change it";
	int b;
	cin>>b;
	while(d>0)
	{	int t = d%b;
		s.push(t);
		d = d/b;
	}
	cout<<"the number in the base is:"<<endl;
	s.display();
}
