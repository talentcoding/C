// prints the integer number into binary bits

#include <stdio.h>

void print_bits(unsigned int num);

int main()
{
	unsigned int num;

	printf("enter a number\n");
	scanf("%d",&num);
	printf("given number:%x\n",num);

	print_bits(num);

}

void print_bits(unsigned int num)
{
        char i=31;

        for(;i>=0;i--)
                printf("%d",(num>>i)&0x01);


        printf("\n");

}

