//Decision making stmt
//if statement
#include<stdio.h>
int main()
{
	int num;
	
	printf("\n Enter any positive number");
	scanf("%d",&num);
	
	if(num>=0&&num<10)// it wil check condition
	{
		//if true
		printf("\n Number is : %d",num);
	}//block of if
	
	printf("\n Out of if statement if number is not less than 10");
	return 0;
}//block of main
