#include<iostream>
using namespace std;

class lq
{  public:
	int arr[100],rear;
	int MAXSIZE=4, front=rear=-1;
	void insert( int n);
	void del();
	void display();
};

void lq :: insert( int n)
{ 
	if(rear==MAXSIZE-1)
	{
		cout<<"QueueFull";

	}

	else
	{
		arr[++rear]=n;
	}
   display();
}

void lq :: del()
{
	if(rear==front)
	{
		cout<<"List Empty";
	}

	else
	{
	    cout<<"Deleted element:"<<arr[++front]<<endl;
	}

  display();	
}
 void lq :: display()
 {
	 for( int i=front+1;i<=rear;i++)
	   cout<<arr[i]<<"->";
	cout<<"END"<<endl;
 }

 int main()
 {
	 lq q1;
	 q1.insert(10);
	 q1.insert(20);
	 q1.insert(30);
	 q1.insert(40);
	 //q1.insert(60);
	 q1.del();
	 //q1.del();
	 //q1.del();
	 //q1.del();
	 //q1.del();
 }