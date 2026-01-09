#include<stdio.h>

int main()
{
    unsigned int x;

    printf("Enter the value: \n");
    scanf("%u", &x);  

    // Swap nibbles (4 bits)
    x = ((x & 0xF0) >> 4) | ((x & 0x0F) << 4);

    printf("Result after swapping nibbles: %u\n", x);  // Print result in unsigned format

    return 0;
}



