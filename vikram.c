#include<stdio.h>
#include<ctype.h>
int main()
{
	char ch;
	printf("ENTER THE CHARCTER");
	scanf("%c",&ch);
if(isalpha(ch)>0)
{
printf("it is alphabet");	
}
else
{
	printf("it is not alphabet");
}
return 0;
}
