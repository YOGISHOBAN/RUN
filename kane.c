#include<stdio.h>
#include<conio.h>
int main()
{
	int i=2,n,k;
	printf("enter the number");
	scanf("%d",&n);
	for(k=0;k<n;k++)
	{
	i=k*n;
	printf("%d*%d=%d",n,k,i);	
	printf("\n");
	}
	
}
