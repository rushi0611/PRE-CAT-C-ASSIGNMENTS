#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char ch;
char name[20];
printf("\n Enter first character :");
 ch=getch();
 
printf("\n Character you typed is :"); 
putch(ch);

printf("\n Enter second character :");
ch=getche();

printf("\n Character you typed is :");
 putchar(ch);
 
printf("\n Enter third character :");
 ch=getchar();
 
printf("\n Character you typed is :");
 putchar(ch);
 
 
 printf("Enter string : ");
 fflush(stdin);
 
 gets(name);
printf(" string is  : ");
 puts(name);
 
getch();

	
	
}
