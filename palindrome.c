#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	int a,b,c=0,temp=0;
	printf("enter the number");
	scanf("%d",&a);
	temp=a;
	while(temp!=0)
	{
	b=temp%10;
	c=c*10+b;
	temp/=10;
}
if(c==a){
	printf("palindrome");
}
else{
	printf("it is not palindrome");
}
printf("%d",c);
}
	
	
		

	

