#include <stdio.h>

#define INT_BITS (sizeof(int) * 8)  // Number of bits in an integer

// Function to reverse bits of a number
unsigned int reverse_bits(unsigned int x);

int main()
{
    unsigned int x;
    printf("Enter the number: \n");
    scanf("%u", &x);  // Use %u for unsigned integer

    unsigned int reversed = reverse_bits(x);
    printf("Reversed bits: %u\n", reversed);

    return 0;
}

// Function to reverse the bits of a number
unsigned int reverse_bits(unsigned int x)
{
    unsigned int reversed = 0;  // Variable to store the reversed number
    int i;
    for (i = 0; i < INT_BITS; i++)
    {
        // Shift left the reversed bits and add the current bit of x
        reversed = (reversed << 1) | (x & 1);

        // Shift x to the right to process the next bit
        x >>= 1;
    }
    return reversed;
}

