#include<stdio.h>
#include<stdlib.h>

int main()
{
	unsigned int a=4;   //0100
	unsigned int b=5;   //0101
	unsigned int c= a&b;
	unsigned int d= a|b;
	unsigned int e= a^b;
	
	printf("c =%d \t d=%d \t e=%d \n",c,d,e);
}




