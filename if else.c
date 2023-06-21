//if-else  check no is even or odd
#include<stdio.h>

int main()
{
	int num;
	printf("\n Enter any number");
	scanf("%d",&num);
	
	if(num%2==0)
		printf("\n Given number is even %d",num);
	else
		printf("\n Given number is odd %d",num);
	

	return 0;
}
