#include<iostream>
using namespace std;

class stack
{
   public:
    stack * top=nullptr;
	stack * bottom=nullptr; 
	stack * next=nullptr;
	int num ;


	void push( int n) ;
	void traversal();
	int stacktop();
	void pop();




};
void stack:: traversal()
{    stack * t=top;
  if( top==nullptr)
  {
	  cout<<"Empty stack";
  }

  else
  {
	  while( t!=nullptr)
	 {  
		 cout<<t->num<<"<-";
		 t=t->next;
	 }
	 cout<<"Null"<<endl;
  }
  
}
void stack ::push( int n)
{    
	stack * temp = new stack;
	temp->num=n;
	temp->next= nullptr;
	 if( top==nullptr)
	 {  
		 top=temp;

	 }

	 else
	 {
		 temp->next=top;
		 top=temp;
	 }
 traversal();	 
}
int stack :: stacktop()
{
	return top->num;
}
void stack :: pop ()
{
	if (top==nullptr)
	{
		cout<<"Stack Underflow";

	}

	else
	{
		stack* curr=top;
		cout<<top->num<<" popped"<<endl;
		top=top->next;
		delete curr;

	}
	
}
int main()
{
	stack s1;
	s1.push(10);
	s1.push(20);
	s1.push(40);
	cout<<s1.stacktop()<<endl;;
	s1.pop();
	s1.pop();
	s1.pop();
	s1.pop();
	s1.push(1000);

}