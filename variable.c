#include<stdio.h>

int main()
{
	//number====identifier
	
	int number;  //variable declaration
	//number can hold the value of type int --integer
	//number is a variable
	number=5; //initialization of variable
	
	int num1=10;
	
	int inum=20;
	float fnum=52.10;
	double dnum=45689.12345;
	char cname='A';
	char sname[10]="Akurdi";
	//void k;  ===>error  used with the functions and pointers
	printf("\n int value of varible inum is = %d",inum);
	printf("\n float value of varible fnum is = %f",fnum);
	printf("\n double value of varible dnum is = %lf",dnum);
	printf("\n char value of varible cname is = %c",cname);
	printf("\n char value of varible cname is = %d %c",cname,cname);
	printf("\n string value of varible sname is = %s",sname);
	
	
	printf("\n size of int is = %d",sizeof(int));
	printf("\n size of char is = %d",sizeof(char));
	printf("\n size of float is = %d",sizeof(float));
	printf("\n size of double is = %d",sizeof(double));
	printf("\n size of void is = %d",sizeof(void));
	return 0;
}
