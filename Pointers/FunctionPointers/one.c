#include<stdio.h>

void sum(int,int);    // Function declaration

int main()
{

	int a,b;
	void (*p)(int, int);  // Function pointer declaration
	printf("Enter the values a and b \n");
	scanf("%d%d",&a,&b);

	p=sum;
	
	(*p)(a,b);
	
}

void sum(int a, int b)
{
	int c;
	c=a+b;
	printf("sum c=%d\n",c);
	
}





