#include<stdio.h>
int getInt(){
	int n;
	scanf("%d",&n);
	return n;
}

int sum(int a,int b){
	return a+b;
}

int sub(int a,int b){
	return a-b;
}

int mul(int a,int b){
	return a*b;
}

int div(int a,int b){
	return a/b;
}

void cal()
{
		
	int a,b,ans,ch;
	printf("1.addition\n");
	printf("2.subtraction\n");
	printf("3.mutiplication\n");
	printf("4.division\n");
	printf("5.exit\n");
	printf("enter your choice\n");
	ch=getInt();
	
	switch(ch)
	{
		case 1:
			   printf("enter any a :\n");
			   a=getInt();
			   printf("enter any b :\n");
			   b=getInt();
			   ans=a+b;
			   printf("sum of number :%d",ans);
			   break;

        case 2:
        	   printf("enter any a :\n");
			   a=getInt();
			   printf("enter any b :\n");
			   b=getInt();
			   ans=a-b;
			   printf("sub of number :%d",ans);
			   break;

        
        case 3:
        	   printf("enter any a :\n");
			   a=getInt();
			   printf("enter any b :\n");
			   b=getInt();
			   ans=a*b;
			   printf("mul of number :%d",ans);
			   break;


        case 4:
        	   
        	   printf("enter any a :\n");
			   a=getInt();
			   printf("enter any b :\n");
			   b=getInt();
			   ans=a/b;
			   printf("div of number :%d",ans);
			   break;

			   
		 case 5:
        	   
        	   printf("exit.......");
        	   break;
	}
	defult:
		printf("invaild choice!!");
}


