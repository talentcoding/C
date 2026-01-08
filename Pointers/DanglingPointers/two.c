#include <stdio.h>

int* createDanglingPointer() {
    int localVar = 10;
    return &localVar;  // Returning address of a local variable
}

int main() {
    int *ptr = createDanglingPointer();  // ptr points to a local variable

    // The local variable `localVar` no longer exists after the function returns
    // Now ptr is a dangling pointer
    printf("Value from dangling pointer: %d\n", *ptr);  // Undefined behavior

    return 0;
}

