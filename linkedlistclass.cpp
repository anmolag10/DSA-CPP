#include<iostream>
using namespace std;
class list
{


 public:
     int num;
	 long regno;
	public: list * next;
public:
	list *front=NULL;
	void insfront( int n);
	void insend(int n);
	void traverse();
	void inspos(int n, int p);
	void delfront();
	void delspec(int n);
	void inssorot(int n);
	void delsortdup();
	void dispr( list*);
	void movetohead( list*,int);
	void deleteunsort();
	void mergesort(list *, list *);
};

list *front=NULL;


void list :: traverse()
{
 list * curr;
 curr=front;
 while(curr!=NULL)
 {
	 cout<<curr->num<<" -> ";
	 curr=curr->next;
 }
 //cout<<curr->num<<" ->"; // remove this statement when you want to take curr!=NULL; for checking the termination
 cout<<"NULL"<<endl;

}
void list :: insfront( int n)
{
    list * temp = new list;
	temp->num=n;
	temp->next=NULL;

	if( front ==NULL)
	{
        front=temp;
 	}
 

 else
 {
	 temp->next=front;
	 front=temp;

 }
 
 traverse();

 
}

void list :: insend( int n)
{
	list * temp = new list;
	temp->num = n;
	temp->next=NULL;

	list * curr = front;


	if(front==NULL)
	{
		front=temp;
	}
	else 
	{
		while (curr->next!=NULL)
		{
			curr=curr->next;

		}

	curr->next=temp;


	}

traverse();

}

void list :: inspos( int n, int p)
{
  list * temp=new list;
  temp->num=n;
  temp->next=NULL;

  list * curr=front;
  for( int i=0;i<=p-1;i++)
  { curr=curr->next;} 
  

 temp->next=curr->next;
  curr->next=temp;
 
 traverse();

}

void list :: delfront()

{

   list * temp;

   if( front==NULL)
   {
	   cout<<"Empty list"<<endl;
   }  


 else if ( front->next==NULL)
   {
	   cout<<"Entered this position";

	   temp = front;
	   front=NULL;
	   delete temp;
}



   else
   {
	   cout<<"Entered this ";
       temp = front;
	   front=front->next;
	   delete temp;


   }
   

   traverse();

}

void list::delspec(int n)
{


   list * temp;
   list *curr=front;
   list*prev=nullptr;

   if( front==NULL)
   {
	   cout<<"Empty list"<<endl;
   }  


 else if ( front->num==n)
   {
	   

	   temp = front;
	   front=NULL;
	   delete temp;
}



   else
   {
	  	while(curr->next!=nullptr)  // curr->next tnot to be taken as the it wont make the deleted last node centeral
	   {
		   prev=curr;
		   curr=curr->next;
		   if(curr->num==n)
		   {
			   temp=curr;
			   prev->next=curr->next;
			   delete temp;
			   break;
		   }
		
	   }
 

	/*   	while(curr->next!=nullptr)  // curr->next 
		 { prev=curr;
		   curr=curr->next;
		   if(curr->num==n)
		   {
			   temp=curr;
			   prev->next=curr->next;
			   delete temp;
			   break;
		   }
		
	   }
	   if(curr->next==nullptr)
	   {
		   temp=curr;
		   prev->next=nullptr;
		   delete temp;
	   }*/
   }
   

   traverse();
}
void list :: inssorot( int n)
{ 	list * temp = new list;
	temp->num=n;
	temp->next=nullptr;
	list * curr=front;
	list *prev=nullptr;
	if(front==nullptr){front=temp; return; }
	while((curr!=nullptr)&&(temp->num>=curr->num))
	{
		prev=curr;
		curr=curr->next;
	}
	if(curr!=nullptr)
	{
		if( prev==nullptr)
		{
			front=temp;

		}


		else
		{
		     temp->next=prev->next;
			 prev->next=temp;

		}	
	}
	else
	{
	prev->next=temp;
	}
	
 traverse();

}

void list :: delsortdup()
{

	list * i=front;
	list*j=front->next;
	list * temp;
	while( j!=nullptr && i!=nullptr)
	{
		if(i->num==j->num)
		{ 
			temp=j;
			i->next=j->next;
			delete temp;
			break;
		  
		}

		else
		{
			i=i->next;
			j=j->next;
		}
		
		 
	}
	 traverse();
}

void list :: dispr( list * first)

{
	if(first==nullptr)
	{
		return;

	}

	else
	{
	    
		dispr(first->next);
		cout<<first->num<<" ";

	}
	
}


void list :: movetohead( list * curr, int key)
{  
	list * prev=nullptr;

	while(curr!=nullptr)
	{
		if( curr->num==key)
		{
			prev->next=curr->next;
			curr->next=front;
			front=curr;

		}
		prev=curr;
		curr=curr->next;

	}

	traverse();



}

void list ::deleteunsort()
{
	list *p,*q, *qprev,*temp;




	for ( 	p=front; p->next!=nullptr; p=p->next)
	 {
		 for( qprev=p,q=p->next; q!= nullptr; q=q->next,qprev=qprev->next )
		 {
             if( p->num==q->num)
			 {
			    	 temp = q;
					 qprev->next=q->next;
					    delete temp;
			 }
		 }
           
	 }
 traverse();
}

void list :: mergesort( list * first , list * second )
{
  list* third=front;
 list * last=nullptr;
 if(first->num<second->num)
 {   
	 cout<<"true";
	 third=first;
	 last=first;
	 first=first->next;
	 last->next=nullptr;

 }

 else
 {
	 third=second;
	 last=second;
	 second=second->next;
	 last->next=nullptr;

 }
 while( first != nullptr && second !=nullptr)
 {
	 if(first->num<second->num)
	    {
			last->next=first;
			last=first;
			first=first->next;
			last->next=nullptr;
		}
    	 else
	    {
			last->next=second;
			last=second;
			second=second->next;
			last->next=nullptr;
		}
 

}
if(first==nullptr)
{
	last->next=second;

}
if(second==nullptr)
{
	last->next=first;
}
front=third;
traverse();
}
int main()  {
	list l1,l2,l3,l4;
    l2.insend(1);
	l2.insend(2);
	l2.insend(5);
	l2.insend(7);
	l1.insend(3);
	l1.insend(4);
	l1.insend(12);
	l1.insend(81);
    
	l3.mergesort(l1.front,l2.front);
	

	
	
	


}