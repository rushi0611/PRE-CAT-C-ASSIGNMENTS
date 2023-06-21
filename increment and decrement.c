#include<stdio.h>
//preIncrement and decrement
int main()
{
	int x=20;
	int y;
	
	printf("\n value of x and y before pre_increment x= %d y=%d",x,y);
	//x=20 y=garbage
	
	y=++x;  //=>it will inc value of x first then assign to y 
	
	printf("\n value of x and y after pre_increment x= %d y=%d",x,y);
//	//x=21 y=21
//	
//	
//	//post increment
	int a=12;
	int d;
	
	printf("\n value of a and d before post_increment a= %d d=%d",a,d);
//	//a=12 d=garbage
//	
//	d=a++;  //=>it will inc value of x first then assign to y 
//	
	printf("\n value of a and d after post_increment a= %d d=%d",a,d);
//	//a=13 d=12
	
	return 0;
}
