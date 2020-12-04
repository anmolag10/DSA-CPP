#include<iostream>
using namespace std;

class Node 
{
	private:
	Node* head=nullptr;
	Node * prev= nullptr;
	Node * next =nullptr;
	int num;

	public:
	void traversal();
	void insertion( int n, int pos);
	void deleteion( int pos);


};

void Node :: traversal()
{    Node* curr=head;
	if (head==nullptr)
	{
		cout<<"List Empty";

	}

	else
	{   do
		 {
			 cout<<curr->num<<"<-->";
			 curr=curr->next;
			 
		 }
	
	     while(curr!=head);

		 cout<<"HEAD->"<<endl;
		  
	}
	
}

void Node :: insertion ( int n , int pos)
{   Node * temp = new Node;
	temp->prev=nullptr;
	temp->num=n;
	temp->next=nullptr;
    
	if ( head== nullptr)
	{
		head=temp;
		temp->next=head;
		temp->prev=head;


	}

	else
	{
		if (pos==0)
		{
          temp->next=head;
		  temp->prev=head->prev;
		  head->prev->next=temp;
		  head->prev=temp;
		  

		}
		else
		{   Node* curr= head;
			for( int i=1;i<pos;i++)
			{
                curr=curr->next;
			}
               temp->prev=curr;
			   temp->next=curr->next;
			   curr->next->prev=temp;
			   curr->next=temp;
		}
		

	}
	
	traversal();
}

void Node :: deleteion( int pos)
{  Node * curr=head;
   if (head==nullptr)
   {  
	   cout<<"List empty";   }
	else
	{
		if ( pos==0)
		{
          head->next->prev=head->prev;
		  head->prev->next=head->next;
		  head=curr->next;
		  delete curr;
		}

	/*	else
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
*/
	traversal()	;
}

}

int main()
{
	Node d1;
	d1.insertion(1000,99);
	d1.insertion(20,0);
	d1.insertion(323,1);
	d1.insertion(123,2);
	d1.insertion(1234,3);
	d1.deleteion(0);


}