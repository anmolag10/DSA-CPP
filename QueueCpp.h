#ifndef QueueCpp
#define QueueCpp
#include<iostream>
using namespace std;
class Node
{
public:
	int data;
	Node *lc;
	Node * rc;  
};

class Queue
{ 
	Queue * front;
	Queue * rear;
	Queue * next;
	Node* data;

	public :
	   void enq(Node * add);
	   Node* deq();
	   void disp();
	   int isEmpty();



};

void Queue :: enq( Node* add)
{
   Queue * t = new Queue;
   t->data=add;

   if( front==nullptr)
   {
	   front=rear=t;

   }

   else
   {
	   rear->next=t;
	   rear=t;


   }
   
}

Node * Queue:: deq()
{
	if( front==nullptr)
	{
		cout<<"Empty Queue";

	}
	else
	{
		Queue* temp=front;
		front=front->next;
		Node* aval=temp->data;
		delete temp;
		return aval;
	}
	
}

int Queue ::isEmpty()
{
	if  (front==nullptr)
	    return 1;
	
	return 0;
	
}


#endif 