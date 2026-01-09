#include<stdio.h>

int main()
{
    unsigned int x;  // Example number: 5 in binary is 00000000000000000000000000000101

    printf("enter the value \n");
    scanf("%d",&x);
    // Swap adjacent bits
    x = ((x & 0xAAAAAAAA) >> 1) | ((x & 0x55555555) << 1);

    printf("%u\n", x);  // Print the result in unsigned integer format

    return 0;
}

