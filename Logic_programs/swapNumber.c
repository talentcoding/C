#include<stdio.h>


int main()
{
	int a=10,b=30;
	printf("a=%d  b=%d\n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("After swaping a=%d  b=%d \n",a,b);
}
