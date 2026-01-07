#include <stdio.h>


int bit_count(int num);

int main()
{
	int num,count=0;

	printf("enter a number\n");
	scanf("%d",&num);

	count=bit_count(num);

	printf("count is:%d\n",count);

	return 0;
}

int bit_count(int num)
{
        char i,count=0;

        for(i=31;i>=0;i--){
                printf("%d",(num>>i)&0x01);
                if((num>>i)&0x01)
                count++;
        }
        printf("\n");

return count;
}
