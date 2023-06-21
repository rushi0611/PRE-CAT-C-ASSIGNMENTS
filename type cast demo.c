#include<stdio.h>
int main9()
{
	int x = 10;
	char y = 'a';
	
	printf("Value of y is=%d and also=%c", y, y);
	/* y==>char implicitly coverted to int */
	x = x + y; //ascii y=97

	//10+'a'
	printf("\n %d", x); //107


	double num = 1.2;
	//int sum = (int)num + 1;
	int sum =(int)num + 1;
	printf("\n %d", sum);

	int a = 5, b = 2;
	float res;
	res = (float)a / b;
	printf("\n res=%f", res);

	//scanf 
	printf("\n Enter value for a and b");
	//20,30
	scanf("%d %*c %d", &a, &b);

	printf("\n a=%d \t b=%d", a, b);
	return 0;
}
