#include<stdio.h>


int main()
{
	unsigned int x;
	printf("entre the value of x \n");
	scanf("%u",&x);

	x= (x!=0) && !(x&(x-1));
	if(x==1)
	{
		printf("Power of 2 \n");
	}
	else 
	{
		printf("Not power of 2 \n");
	}
}

