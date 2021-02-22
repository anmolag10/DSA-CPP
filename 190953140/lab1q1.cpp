#include<iostream>
using namespace std;

int len( char str[])
{
   for(int i =0; str[i]!='\0'; i++)
   {
   }
   return i;
}

void concat( char str1[], char str2[], char res[])
{
   int lenstr=len(str1);
   for(int i =0 ;str1[i]!='\0';i++)
   {
    res[i]=str1[i];
   }
 for(int i =len+1,j=0 ;i<lenstr+1+len(str2), str2[j]!='\0';i++,j++)
   {
    res[i]=str2[j];
   }
}
int compare( char str1[], char str2[])
{
    int diff;
    for(int i =0, j=0; str1[i]!='\0',str2[j]!='\0';i++,j++)
    {
        if(str1[i]==str2[j])
            continue;
        else
        {
            diff=str1[i]-str2[j];
            break;
        }

    }

    return diff;
}

int main()
{
    char s[100]="An";
    cout<<len(s);

}


