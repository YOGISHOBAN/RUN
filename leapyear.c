#include<stdio.h>
#include<conio.h>
int main()
{
	int year;
	printf("enter the year");
	scanf("%d",&year);
	if(year%4%400%100==0){
	printf("it is leapyear");
}
else
{
	printf("it is not leap year");
}
}
