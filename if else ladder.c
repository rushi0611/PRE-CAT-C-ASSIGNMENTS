// if-else-if ladder
//number is +ve -ve or 0

//if-else  check no is even or odd
#include<stdio.h>

int main()
{
	int num;
	printf("\n Enter any number");
	scanf("%d",&num);
	printf("%d",num);

	if(num==0)
	{
		printf("\n number =%d is zero",num);
	}
	else if(num>0)
	{
		printf("\n number =%d is +ve",num);
	}
	else if(num<0)
	{
		printf("\n number =%d is -ve",num);
	}
	else
	{
		printf("\n value =%d is not a number",num);
	}
	return 0;
}
