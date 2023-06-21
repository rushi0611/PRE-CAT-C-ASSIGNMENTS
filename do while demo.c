//do_while

#include<stdio.h>
int main()
{
	int num=1;
	
	do
	{
		printf("\n number is =%d",num);
		if(num%2==0)
		{
			printf("\n even number is =%d",num);
		}
		else{
				printf("\n odd number is =%d",num);
		}
		num++;
	}while(num<=10);
	return 0;
}
