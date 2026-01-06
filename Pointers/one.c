#include<stdio.h>

int main()
{
	int x=100;
	int *p = &x;
	printf("value of x= %d \t address of x =%p \n",x,&x);
	printf("value of p=%d \t address of p =%p \n",*p,&p);


}
