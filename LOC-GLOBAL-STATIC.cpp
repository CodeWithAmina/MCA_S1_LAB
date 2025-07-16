#include<stdio.h>

int a=5; // using global variable

void disp()
{
	int i=2; //local variable
	printf("local variable is %d",i);
}

int main()
{
	static int c=4;  //static variable
	register int r=4; //register
	printf(" static variable is %d \n",c);
	printf(" global variable is %d \n",a);
	printf(" register variable is %d \n",r);
	disp();
	return 0;
}
