#include <stdio.h>
#include <stdlib.h>

int main() {
    // Dynamically allocate memory
    int *ptr = (int *)malloc(sizeof(int));
    *ptr = 100;

    printf("Value before free: %d\n", *ptr);

    // Free the allocated memory
    free(ptr);

    // Now ptr is a dangling pointer because memory has been freed
    // Accessing it causes undefined behavior
    printf("Value after free (undefined behavior): %d\n", *ptr);

    return 0;
}

