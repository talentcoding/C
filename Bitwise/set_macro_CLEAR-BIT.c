// clear a bit using macro 

#include <stdio.h>

#define CLEAR_BIT(num,pos)  num&=~(0x01<<pos)

void print_bits(unsigned int num);

int main()
{
	unsigned int num,pos;
	printf("enter a number and position\n");
	scanf("%d%d",&num,&pos);

	print_bits(num);

	CLEAR_BIT(num,pos);

	print_bits(num);

}

void print_bits(unsigned int num)
{
        char i=31;

        for(i=31;i>=0;i--)
                printf("%d",(num>>i)&0x01);

        printf("\n---END---\n");

}

