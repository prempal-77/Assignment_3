// Write a program to check whether a given number is a three digit number or not.
					
#include<stdio.h>
int main()
{
	int num;
	printf("Enter a number:");
	scanf("%d",&num);
	if(num>99 && num<1000)
	{
		printf("%d is a 3 digit number",num);
	}
	else
	{
		printf("%d is not a 3 digit number",num);
	}
	return 0;
}