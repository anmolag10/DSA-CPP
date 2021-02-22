#include<bits/stdc++.h>
using namespace std;
class stackk{
public:
		char s[10];
		int top;
		int max;
		stackk()
		{
			top=-1;
		}
		stack(int m){
			top=-1;
			max= m;
		}
		bool isEmpty()
		{
			if(top==-1)
			return true;
			else return false;

		}
		bool isFull()
		{
			if(top == max-1)
			{
				return true;
			}
			else return false;
		}
		void push(int val)
		{
			if(isFull())
			{
				cout<<"OVERFLOW!!!!"<<endl;
			}
			else
			{
				s[++top]=val;
			}
		}
		char pop()
		{
			if(isEmpty())
			{
				cout<<"Stack UNDERFLOWWW!!!"<<endl;
				return 0;
			}
			else{
				return s[top--];
			}
		}
		char peek(int pos)
		{
			if(isEmpty())
			{
				cout<<"stack is empty";
				return 0;
			}
			else return s[pos];
		}
		void change(int pos,int val)
		{
			s[pos] =val;
			cout<<"value changed";
		}
		void display(){
			cout<<"stack:"<<endl;
			for(int i=top;i>=0;i--)
			{
				cout<<s[i]<<" ";
			}
		}
	};

int main()
{
	stackk s;
	int flag=0;
	char ch[10];
	cout<<"enter the string:"<<endl;
	cin>>ch;
	int len =strlen(ch);
	for(int i=0;i<len;i++)
	{
		s.push(ch[i]);
	}
	for(int i=0;i<len;i++)
	{
		if(s.pop()!=ch[i])
		{
			flag=1;
		}
	}
if(flag == 0)
cout<<"palindrome"<<endl;
else
cout<<"not palindrome";

}
