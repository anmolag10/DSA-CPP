#include<bits/stdc++.h>
 using namespace std;
 class student{
 public:
 	char name[10];
 	int rn;
 	char grade;
 	void read(student s[],int n){
 	    for(int i=0;i<n;i++)
        {
            cout<<"enter name, roll,grade"<<endl;
            cin>>s[i].name;
            cin>>s[i].rn;
            cin>>s[i].grade;
        }
 		/*cout<<"enter name, roll and grade of the student:"<<endl;
 		cin>>name;
 		cin>>rn;
 		cin>>grade;*/
	 }
 	void display(student s[],int n){
 		//cout<<"Name: "<<name<<endl<<"Roll no."<<rn<<endl<<"Grade:"<<grade;
        for(int i=0;i<n;i++)
        {

            cout<<" name: "<<s[i].name<<" roll : "<<s[i].rn<<" grade  "<<s[i].grade<<endl;
        }
	 }
 	void sort(student obj[],int n)
 	{	student temp;
 		for(int i=0;i<n-1;i++)
 		{
 			for(int j=0;j<n-i-1;j++)
 			{
 				if(obj[j].rn > obj[j+1].rn)
 				{
 					temp=obj[j+1];
 					obj[j+1]=obj[j];
 					obj[j]=temp;
				 }
			 }
		 }
		 cout<<"after sorting the roll numbers:"<<endl;
		 display(obj,n);
	 }
 };
 int main(){
 	int n;
 	cout<<"enter the number of students:"<<endl;
 	cin>>n;
 	student s[n] ,ss;
    ss.read(s,n);
    ss.display(s,n);
    ss.sort(s,n);
 	/*for(int i=0;i<3;i++)
 	{
 		s[i].read();
	 }
	for(int i=0;i<n;i++)
	{
		s[i].display();
		cout<<endl;
	}
	ss.sort(s,3);*/
 }

