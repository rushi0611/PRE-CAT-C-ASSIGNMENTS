//precision printing

#include<stdio.h>

int main()
{
	int x=20;
	
	printf("\n value of x is =%d",x);
	
	printf("\n value of x is =%05d",x);
	
	printf("\n value of x is =%1d",x);
	
	
	float pi=3.141592;
	printf("\n value of pi is =%f",pi);
	
	printf("\n value of pi is =%1.1f",pi);
	
	printf("\n value of pi is =%1.2f",pi);
	
	printf("\n value of pi is =%4.4f",pi);
	
	printf("\n value of pi is =%09.4f",pi);
	
	printf("\n value of pi is =%-9.4f",pi);
	
	
	printf("\n String is =%s","Hello world");
	
	printf("\n String is =%15s","Hello world");
	
	printf("\n String is =%-10s","Hello world"); //atleast 10 char
	
	printf("\n String is =%.10s","Hello world"); //only print 10 char
	
	printf("\n String is =%15.10s","Hello world");
	
	printf("\n String is =%-15.10s","Hello world");
	return 0;
}
