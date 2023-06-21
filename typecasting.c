#include<stdio.h>
int main()
{
	int x = 10;
	char y = 'a';
	/* y implicitly coverted to int */
	x = x + y; //ascii a=97
	printf("%d", x); //107


	double num = 1.2;
	int sum = (int)num + 1;
//	int sum = num + 1;
	printf("\n %d", sum);


	int a = 5, b = 2;
	float res;
	res = (float)a / b; 
	//	res = a / b; 
	printf("\n res=%f", res);
	return 0;
}
