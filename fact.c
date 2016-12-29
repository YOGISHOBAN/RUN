#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,b,fact=1;
	printf("enter the number");
	scanf("%d",&n);
	while(n>0)
	{
		fact=fact*n;
			n--;}
		printf("%d",fact);
}

