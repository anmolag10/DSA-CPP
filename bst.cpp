#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node
{  public:
	Node * lc;
	Node * rc;
	int data;
};

class BST 
{ public:
	Node* root=nullptr;
	void create();
	void recurviseinsertion();
	Node* deletion(int key, Node *t);
	Node* rsearch(int key, Node *t);
	Node* search( int key, Node *t);
	void traverse( Node * t);
	//int height( Node *t);
	//Node *Inpre(Node *t);
	//Node *Insucc(Node *t);

};


void BST :: create()
{
	int arr[10]={9,15,5,20,17,16,8,12,3,6};

	root = new Node();
	root -> data = arr[0];
	root -> lc = root -> rc = nullptr;
    Node *t, *r;
	
	for(int i = 1 ; i < 10 ; i++)
	{   t=root;
	    while(t!=nullptr)
		{
			r=t;
			if( t->data > arr[i])
			    {
					t=t->lc;
				}

			else 
			 {
				 t=t->rc;
			 }
		}
		
		Node * temp= new Node;
		temp -> data = arr[i];
		temp -> rc = temp -> lc = nullptr;
		if ( r -> data > arr[i])
		{
		     r->lc=temp;
		}

		else
		{
			r->rc=temp;
		}
		
	}

}

int height( Node *t)
{   int x=0,y=0;
	if( t==nullptr)
	{
		return 0;

	}
	x=height(t->lc);
		y=height(t->rc);

      if( x >y)
	     return x+1;
	else 
	   return y+1;

}

void BST :: traverse( Node * t)
{   Node * temp;
   queue<Node*> qt;
   cout<<t->data<<" ";
   qt.emplace(t);
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

Node* BST :: rsearch( int key, Node* t)
{
	if( t == nullptr)
	   return nullptr;
	
	if( t->data == key)
	    return t;
	else if ( t->data > key)
	   return rsearch(key,t->rc);
	else
	  return rsearch(key,t->lc);

}

Node* BST :: search( int key, Node *t)
{

	while( t!=nullptr)
	{
		if( key == t->data)
		   return t;
	    else if ( key > t->data)
		    t=t->rc;
		else    
		   t=t->lc;
	
	}
}

Node * Inpre( Node *t)
{
	if( t!=nullptr && t->rc!=nullptr)
	{
		t=t->rc;

	}

	return t;
}

Node* Insucc( Node *t)
{
	if( t!=nullptr && t->lc!=nullptr)
	{
		t=t->lc;

	}

	return t;
}
Node* BST ::deletion(int key, Node *t)
{  
	Node *q;

if( t==nullptr)
   return nullptr;
if( t->rc==nullptr && t->lc==nullptr)
{
	if (root==t)
	   root=nullptr;
	
	delete(t);
	return nullptr;
}

if( key<t->data)
{
	t->lc=deletion( key, t->lc);
}


else if (key > t->data)
{
    t->rc=deletion( key,t->rc);
}

else 
{
	if( height(t->lc) > height(t->rc))
	{ 
		 q = Inpre(t->lc);
		t->data=q->data;
		t->lc=deletion(q->data,t->lc);
	}
   
   else
   {
	    q= Insucc(t->rc);
		t->data=q->data;
		t->rc=deletion(q->data,t->rc);
   }

   
   
}


 return t;
}

int main()
{
	BST t1;
	t1.create();
	t1.traverse(t1.root);
	t1.deletion( 9,t1.root);
	//cout<<t1.Inpre(t1.root->lc);
	cout<<"\n After Deleting 9"<<endl;
	t1.traverse(t1.root);
	
}