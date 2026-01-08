#include <stdio.h>
#include <stdlib.h>

int main() {
    // Dynamically allocate memory
    int *ptr = (int *)malloc(sizeof(int) * 5);

    // Fill the array
    for (int i = 0; i < 5; i++) {
        ptr[i] = i + 1;
    }

    // Reallocate memory to a smaller size
    ptr = (int *)realloc(ptr, sizeof(int) * 3);

    // At this point, ptr is still pointing to the old memory (which is now invalid)
    // The old memory is now a dangling pointer
    printf("Accessing old memory: %d\n", ptr[2]);  // Undefined behavior

    free(ptr);

    return 0;
}

