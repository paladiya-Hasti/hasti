#include<stdio.h>


int getInt()
{
	int n;
	scanf("%d",&n);
	return n;
}

int arrayinput(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("enter elements [%d]",i);
		a[i]=getInt();
	}
}
int arrayoutput (int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d element %d\n",i,a,a[i]);
	}
}
int getavg(int a[],int n)
{
	int i ,sum=0,avg=0;
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
		avg=sum/n;
	}
	
	printf("sum of :%d\n",sum);
	printf("avg of :%d\n",avg);
}
int getupdate(int a[],int n)
{
	int i, pos,val;
	printf("enter post :");
	pos=getInt();
	printf("enter value :");
	val=getInt();
	a[pos]=val;
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}
void getAece(int a[],int n)
{
     int i, j;
	for(i=0;i<n;i++)
	{ 
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				a[i]=a[i]+a[j];
				a[j]=a[i]-a[j];
				a[i]=a[i]-a[j];
			}
		}
	}
	printf("ascending order:");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}
	

void getDesce(int a[],int n)
{
		int i, j;
		for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if(a[i]<a[j])
				{
					a[i]=a[i]+a[j];
					a[j]=a[i]-a[j];
					a[i]=a[i]-a[j];
				}
			}
		}
	
	printf("descending order:");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}

void hsp()
{
    int ch,n,avg ,a[n];
	printf("1.intput and output : \n");
	printf("2.averagr : \n");
	printf("3. update: \n");
	printf("4.sort : \n");
	printf("enter your choice : \n");
	ch=getInt();
	
	switch(ch)
	{
		        case 1:
		      	        printf("enter any size : ");
		      	        n=getInt();
		      	     
		      	         arrayinput(a,n);
		      	         arrayoutput(a,n);
		      	         break;
		      	     
		        case 2:
		      	        printf("enter any size : ");
		      	        n=getInt();
		      	     
		      	          arrayinput(a,n);
		      	          arrayoutput(a,n);
		      	          break;
					   
			    case 3:
		      	        printf("enter any size : ");
		      	        n=getInt();
		      	     
		      	         arrayinput(a,n);
		      	         arrayoutput(a,n);
		      	         break;
						   		   
				case 4:
				        printf("1.asecending\n");
					    printf("2.descending\n");
						printf("enter your choice :"); 
						ch=getInt();
					
					switch(ch)
					{
						case 1:
		      	                printf("enter any size : ");
		      	      		    n=getInt();
		      	     
		      	        			 arrayinput(a,n);
		      	        			 arrayoutput(a,n);
		      	        			 
		      	        			 getAece(a,n);
		      	        			 break;
		      	        			 
		      	        case 2:
		      	                printf("enter any size : ");
		      	      		    n=getInt();
		      	     
		      	        			 arrayinput(a,n);
		      	        			 arrayoutput(a,n);
		      	        			 
		      	        			 getDesce(a,n);
		      	        			 break;			 

					}	
							   
					   	     

	}
			
}	
	
	
	
