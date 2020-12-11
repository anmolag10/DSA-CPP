#include<iostream>
#include<queue>
#include<bits/stdc++.h>
#include<vector>
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
	void traverse(Node * t);
	void ptraverse();
	void levelordertrav(Node * t);
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
//levelordertrav();
}

void Tree :: traverse(Node * t)
{   
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
map<int, int> inmap;
int preindex=0;
Node * treegen( vector<int> in ,vector<int>pre, int start,int end)
{   
	Node* root = new Node();


	if(start>end)
	 return nullptr;
	 
    root->data=pre[preindex++];
	root->lc=0; root->rc=0;
	if( start == end)
	   return root;

    int val= root->data;
	int inindex=inmap[val];

	root->lc=treegen( in, pre,start,inindex-1);
	root->rc=treegen( in , pre, inindex+1,end);

	return root;

	
}
Node * treehelper( vector<int> in, vector<int> pre)
{
	
	
   for( int i=0;i<in.size();i++)
   {
	   inmap.insert({in[i],i});
   }

	return treegen(in , pre, 0,8);
}



int main()
{
	Tree t1(100);
	//t1.create();

	vector<int> a={4,7,9,6,3,2,5,8,1};
	 vector<int> b={7,6,9,3,4,5,8,2,1};
    
	Node * check= treehelper(b,a);

	t1.traverse(check);


}