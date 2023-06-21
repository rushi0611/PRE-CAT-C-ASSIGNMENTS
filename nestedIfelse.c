//check given two numbers  are = or > or <
#include<stdio.h>

int main()
{
	int num1,num2;
	
	printf("\n Enter any two numbers");
	scanf("%d \t %d",&num1,&num2);
	
	if(num1!=num2)
	{
		printf("\n num1 and num2 are not equal numbers");
		//nested if -else
		if(num1>num2)
		{
			printf("\n num1 = %d is greater",num1);
		}
		else{
			printf("\n num2 = %d is greater",num2);
		}
	}
	else
	{
		printf("\n num1 and num2 are equal numbers");
		printf("\n num1= %d \t num2= %d",num1,num2);
	}
	return 0;
}
