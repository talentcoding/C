#include <stdio.h>

int main() {
    int *ptr;  // Declare a pointer but do not initialize it

    // Dereferencing a wild pointer - Undefined Behavior
    // This is a wild pointer because it has not been initialized
    printf("Value at wild pointer: %d\n", *ptr);  // May cause a crash or undefined behavior

    return 0;
}

