#include<iostream>
#include "QueueCpp.h"
#include<bits/stdc++.h>
using namespace std;

class Tree
{
	public: Node * root;
	Queue q;

	public:Tree( int n)
	{
		root=new Node();
		root->data=n;
		root->lc=nullptr;
		root->rc=nullptr;
		q.enq(root);
	}

    
	void create()
	{
		Node* p;
		int num;
		while((q.isEmpty())==0)
		{ 
			p=q.deq();
			cout<<"Enter Left Child:";
			cin>>num;

			if( num!=-1)
			{ Node * temp= new Node;
			    temp->data=num;
				temp->lc=nullptr;
				temp->rc=nullptr;
			    p->lc=temp;
				q.enq(temp);

			}

			cout<<"Enter Right Child:";
			cin>>num;
            cout<<"----------------------- \n";
			if( num!=-1)
			{ Node * temp= new Node;
			    temp->data=num;
				temp->rc=nullptr;
				temp->rc=nullptr;
			     p->rc=temp;
				 q.enq(temp);
		    }
	}
traverse(); }
void traverse( )
{   Node *t =root;
   stack<Node*> s;
   
   while(t!=nullptr || !s.empty())
   {
	   if(t!=nullptr)
	   { cout<<t->data<<" ";
	      s.push(t);
		  t=t->lc;

	   }

	   else
	   {
		   t=s.top();
		   s.pop();
	
		   t=t->rc;
	   }
	   
   }


}
};

int main()

{
	Tree T1(10);
	T1.create();

	
}