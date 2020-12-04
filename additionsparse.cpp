#include<iostream>
using namespace std;

class sparse 
{ 
	public:
	  int row, col, val;
	
	  sparse ( int r, int c ,int v)
	  {
        row=r;
		col=c;
		val=v;

	  }

	  sparse()
	  {
		  row=col=val=0;
	  }



  void disp( sparse * a)
     { 
		 for(int i =0 ;i<a[0].row; i++) 
			{  	cout<<endl;
			   
				for(int j =0 ;j<a[0].col; j++)
			   {
				  int flag=0; 
				 for (int ctr =1;ctr<10;ctr++)
				     

						{ 
								if ((a[ctr].col==j) && (a[ctr].row==i))
							{
								cout<<a[ctr].val<<" \t";
								flag=1;
								break;
							} 

							
		
						}
				            if (flag==0)
								cout<<"0 \t";
								
			   }

			   
			}

	 }
 
void add( sparse *a, sparse *b, sparse *c)
   {
	   int ctr1=1,ctr,ctr2=1,i=1;

	   for(i=1;i<=a[0].col;i++)
	    {
			if(a[ctr1].row<b[ctr2].row)
			{
				c[i].row=a[ctr1].row;
				c[i].col=a[ctr1].col;
				c[i].val=a[ctr1].val;
				ctr1++;
				

			}


			else if(a[ctr1].row==b[ctr2].row)
			{
					if(a[ctr1].col<b[ctr2].col)
							{
								c[i].row=a[ctr1].row;
								c[i].col=a[ctr1].col;
								c[i].val=a[ctr1].val;
								ctr1++;
								

							}
					if (a[ctr1].col==b[ctr2].col)
					      {
                             {
								c[i].row=a[ctr1].row;
								c[i].col=a[ctr1].col;
								c[i].val=a[ctr1].val+b[ctr2].val;
								ctr1++;
								ctr2++;
								

							}

						  }
                    
					else
					{
								c[i].row=b[ctr2].row;
								c[i].col=b[ctr2].col;
								c[i].val=b[ctr2].val;
								ctr2++;
								
					}
					
              


			}
			else
					{
								c[i].row=b[ctr2].row;
								c[i].col=b[ctr2].col;
								c[i].val=b[ctr2].val;
								ctr2++;
								
					}
					
		 	
		}

	
      
   }


};



int main()
{
  sparse a[10],d, b[10],c[10];
  a[0]= sparse(3,4,5);
  a[1]=sparse(0,0,1);
  a[2]=sparse(0,3,7);
  
  b[0]= sparse(3,4,5);
  b[1]=sparse(0,1,1);
  b[2]=sparse(2,3,7);
  b[3]=sparse(0,3,7);
  c[0]=sparse(3,4,5);
  
cout<< "Matrix A";
	d.disp(a);
cout<<"\nMatrix B\n";
 d.disp(b);

 cout<<"\n Sum";
 d.add(a,b,c);
 d.disp(c);

  



}