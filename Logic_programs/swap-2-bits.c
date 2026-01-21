#include<stdio.h>

int main()
{
unsigned int num=4;


num = (((num & 0xcccccccc) >> 1) | ((num & 0x333333333) << 1));

printf("num= %d\n",num);

}
