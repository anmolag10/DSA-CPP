#include<iostream>
using namespace std;

class Node 
{
	private:
	Node* front=nullptr;
	Node * prev= nullptr;
	Node * next =nullptr;
	int num;

	public:
	void traversal();
	void insertion( int n, int pos);
	void deleteion( int pos);


};

void Node :: traversal()
{    Node* curr=front;
	if (front==nullptr)
	{
		cout<<"List Empty";

	}

	else
	{
	     while(curr!=nullptr)
		 {
			 cout<<curr->num<<"<-->";
			 curr=curr->next;
			 
		 }
		 cout<<"NULL"<<endl;
		  
	}
	
}

void Node :: insertion ( int n , int pos)
{   Node * temp = new Node;
	temp->prev=nullptr;
	temp->num=n;
	temp->next=nullptr;
    
	if ( front== nullptr)
	{
		front=temp;

	}

	else
	{
		if (pos==0)
		{
			temp->next=front;
			front->prev=temp;
			front=temp;

		}

		else
		{   Node* curr= front;
			for( int i=1;i<pos;i++)
			{
                curr=curr->next;
			}
            temp->next=curr->next;
			temp->prev=curr;
			if(curr->next!=nullptr) { curr->next->prev=temp;}
			curr->next=temp;

		}
		

	}
	
	traversal();
}

void Node :: deleteion( int pos)
{  Node * curr=front;
   if (front==nullptr)
   {  
	   cout<<"List empty";   }
	else
	{
		if ( pos==1)
		{
			front=front->next;
			front->prev=nullptr;
			delete curr;
		}

		else
		{
			for( int i=1;i<=pos;i++)
			{  
				curr=curr->next;
			}
			if(curr->next!=nullptr){curr->next->prev=curr->prev;}
			curr->prev->next=curr->next;
			delete curr;
		}
	}

	traversal()	;
}



int main()
{
	Node d1;
	d1.insertion(1000,99);
	d1.insertion(20,0);
	d1.insertion(34,1);
	d1.deleteion(2);


}