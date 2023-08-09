#include<stdio.h>

int getint()
{
	int n;
	scanf("%d",&n);
	return n;
}



void hsp()
{
    char s[20];
	int len;
	printf("enter your string :");
	gets(s);
	
	len=strlen(s);
	printf("length: %d",len);
}

void sum(int a[],int n)
{
	int i,sum=0;
	printf("enter size of the array :");
	scanf("%d",&n);
	printf("enter elements in array :");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum+=a[i];
	}
	printf("sum of :%d\n",sum);
}

void pass()
{
	int n,i,o=0,u=0,l=0,len=0,s=0;
	char a[10];
	
	printf("enter your password :");
	gets(a);
	
     for(i-0;i<strlen(a);i++)
     {
     	if(a[i]>=65 && a[i]<=90)
     	{
     		u++;
	    }
	    else if(a[i]>97 && a[i]<=122)
	    {
	    	l++;
		}
		else if(a[i]>=48 && a[i]<=57)
		{
			o++;
		}
		else
		{
		    s++;	
		}
	 }
	 
	 len=strlen(a);
	 if(len>=8 && o>=1 && u>=1 && l>=1 && s>=1)
	 {
	 	printf("your password is strong");
	 }
	 else
	 {
	 	printf("your password is not strong");
	 }
}
 
   



