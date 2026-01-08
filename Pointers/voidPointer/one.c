#include <stdio.h>

int main() {
    int a = 10;
    float b = 3.14;
    char c = 'X';

    void *ptr;  // Declaring a void pointer

    // Pointing the void pointer to an integer
    ptr = &a;
    printf("Value of a (int): %d\n", *((int *)ptr));

    // Pointing the void pointer to a float
    ptr = &b;
    printf("Value of b (float): %.2f\n", *((float *)ptr));

    // Pointing the void pointer to a char
    ptr = &c;
    printf("Value of c (char): %c\n", *((char *)ptr));

    return 0;
}

