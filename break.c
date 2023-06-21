#include<stdio.h>
int main()
{
	//sum of first n natural no;
	int num, i = 1, sum = 0;

	printf("\n Enter the number");
	scanf("%d", &num);

	while (i <= num)
	{
		sum = sum + i;
		if (i == 5)
		{
			break;
			
		}
		i++;
	}
	printf("\n sum=%d", sum);
	return 0;
}
