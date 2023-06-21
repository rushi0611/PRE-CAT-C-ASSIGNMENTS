//program to calculate area and circm of circle
#include<stdio.h>
#define PI 3.14
int main()
{
	float rad,area=0.0,per=0.0;
	
	printf("Enter value of radius");
	scanf("%f",&rad);
	
	area=PI*rad*rad;
	per=2*PI*rad;
	
	
	printf("\n Area is = %f \t Circum = %f",area,per);
	return 0;
}
