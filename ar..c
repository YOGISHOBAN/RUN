#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c,a1,rem,temp=0;
	printf("enter the number");
	scanf("%d",&a);
	a1=a;
	while(a1>0)
	{
		rem=a1%10;
		temp=temp+rem*rem*rem;
		a1=a1/10;		
	}
if(temp==a)
{
	printf("it is armstrong number");
}

else
{

	printf("it is not armstrong number");
}

	
}
