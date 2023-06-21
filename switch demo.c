//switchdemo of calculator

#include<stdio.h>
void main()
{
	int a,b;
	int choice;
	printf("\n Enter any two numbers");
	scanf("%d%d",&a,&b);
	
	printf("\n 1:Addition");
	printf("\n 2:Substraction");
	printf("\n 3:Multiplication");
	printf("\n 4:Division");
	
	printf("\n Plz Enter your choice");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1: printf("\n Addition is =%d",(a+b));
				break;
		case 2: printf("\n Substraction is =%d",(a-b));
				break;
		case 3: printf("\n Multiplication is =%d",(a*b));
				break;
		case 4: printf("\n Division is =%d",(a/b));
				break;
		default:printf("\n Plz Enter correct choice");
				break;
	}
	
}
