//Display addition of firs 10 numbers
//while demo --->ENtry_controlled loop

#include<stdio.h>

int main()
{
	int i=1; //initialization
	int sum=0;
	
	while(i<=10)//at entry point it will check condition
	{
		sum=sum+i;  //
		printf("\n at each iteration value of sum = %d and \t value of i = %d ",sum,i);
		i++;  //i=i+1
	}
	printf("\n sum is =%d",sum);
	return 0;
}
