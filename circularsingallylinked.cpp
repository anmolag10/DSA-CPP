#include<iostream>
using namespace std;

class Clist
{

   public:
    Clist * head  =nullptr;
	int num;
	Clist* next;
	void insertion( int n);
	void traversal();
	void deletion();
    

};
void Clist :: traversal()
{
 Clist * curr;
 curr=head;
do
 {
	 cout<<curr->num<<" -> ";
	 curr=curr->next;
 }
while( curr!=head);
 cout<<"Head"<<endl;

}

void Clist :: insertion( int n)
{
	Clist * temp = new Clist;
	temp->num=n;
	temp->next=nullptr;
	Clist *curr =head;
	if(curr==nullptr)
	{
		head=temp;
		temp->next=head;


	}
	else
	{
		while (curr->next!=head)
		{
			curr=curr->next;
		 } 

		curr->next=temp;
		temp->next=head;

		
	}
	

traversal();


}
void Clist :: deletion()
{
	Clist * curr, *prev;
	curr=head;
	prev=nullptr;

	while(curr->next!=head)
	{ prev=curr;
	  curr=curr->next;

	}
	prev->next=head;
	delete curr;
traversal();
}
int main()
{
	Clist l1;
	l1.insertion(10);
	l1.insertion(20);
	l1.insertion(50);
	l1.insertion(60);
	l1.deletion();
	
}