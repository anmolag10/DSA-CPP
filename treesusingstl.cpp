#include<iostream>
#include<queue>
#include<bits/stdc++.h>
using namespace std;

class Node
{  public:
	Node * lc;
	Node * rc;
	int data;

};

class Tree
{ public:
	Node * root;
	queue<Node*> q;
	Tree(int n);
	void create();
	void traverse();
	void ptraverse();
	void levelordertrav();
};

Tree :: Tree( int n)
{
	root=new Node;
	root->data=n;
	root->lc=0;
	root->rc=0;
	q.push(root);
}

void  Tree :: create()
{   Node * temp; Node * t;
int num;
	while(!q.empty())
	{
		t=q.front();
		q.pop();
		cout<<"Enter Left Child:";
		cin>> num;
		 if( num!=-1)
		 {
			 temp=new Node;
			 temp->data=num;
			 temp->rc=0;
			 temp->lc=0;
			 t->lc=temp;
			 q.push(temp);

		 }
		 cout<<"Enter right child:";
		 cin>> num;
		 cout<<endl;
		 if( num!=-1)
		 {
			 temp=new Node;
			 temp->data=num;
			 temp->rc=0;
			 temp->lc=0;
			 t->rc=temp;
			 q.push(temp);
		}
	}
levelordertrav();
}

void Tree :: traverse()
{   Node *t =root;
   stack<Node*> s;

   while(t!=nullptr || !s.empty())
   {
	   if(t!=nullptr)

	   {  cout<<t->data<<" ";
		 
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



void Tree :: ptraverse()

{   Node *t =root;
long int temp;
   stack<long int> s;
   cout<<"Here";
   while(t!=nullptr || !s.empty())
   {
	   if(t!=nullptr)

	   {  
		   cout<<(long int)t;
		 
		  s.push(((long int )t));
		     t=t->lc;
		 
		  

	   }

	   else
	   {
		   temp=s.top();
		   s.pop();
           if (temp>0){
			   s.push(-temp);
      		   t=((Node*)temp)->rc;
		   }
		   else
		   {
			   cout<<((Node*)(-1*temp))->data<<" ";
			   t=nullptr;
		   }
		   
	   }

   }
}


void Tree :: levelordertrav()
{  Node * t = root;
   Node * temp;
   queue<Node*> qt;
   cout<<root->data<<" ";
   qt.emplace(root);
   while(!qt.empty())
   {     temp=qt.front();
          qt.pop();
		  if(temp->lc)
		  {  
		       qt.push(temp->lc);
			   cout<<temp->lc->data<<" ";
		  }

		  if ( temp->rc)
		  {
			  
		       qt.push(temp->rc);
			   cout<<temp->rc->data<<" ";
		  }
       
   }



}
int main()
{
	Tree t1(100);
	t1.create();
}