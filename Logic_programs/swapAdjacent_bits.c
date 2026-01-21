#include<stdio.h>

int main()
{
unsigned int num=4;


num = (((num & 0xaaaaaaaa) >> 1) | ((num & 0x55555555) << 1));

printf("num= %d\n",num);

}
