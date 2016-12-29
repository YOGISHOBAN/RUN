#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c,temp=0;
	printf("enter the number");
	scanf("%d",&a);
	b=a%10;
	c=b/10;
temp=b+(c*c*c);
printf("%d",temp);
if(temp=a)
{
	printf("it is armstrong number");
}
else{

	printf("it is not armstrong number");
}

	
}
