#include<stdio.h>
int main()
{
	int a=10;
	int b=20;
	int p,q,r;
	int x=30,y=20,z;
	int c;

	c=(a>b)?a:b;   //(check condition)?true:false
	
	printf("\n result is = %d \n",c);
	printf("____________");
	
	(a>b)?printf("\n result in true = %d",c):printf("\n result in false = %d",c);
	
	
	printf("\n -----comma operator---");
	int i;
	i=(1,2,3);
	printf("\n value of i is = %d",i);
}
