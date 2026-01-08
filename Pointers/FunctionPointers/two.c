#include<stdio.h>

// Function declarations
void sum(int, int);
void sub(int, int);
void multiply(int, int);

int main()
{
    int a, b;
    int choice;

    // Declare a function pointer that takes two ints and returns void
    void (*p)(int, int);

    // Take input from the user
    printf("Enter the values a and b: \n");
    scanf("%d%d", &a, &b);

    // Display the operation choices
    printf("Choose the operation:\n");
    printf("1. Sum\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    // Set function pointer based on the user's choice
    switch(choice)
    {
        case 1:
            p = sum;  // Point to sum function
            break;
        case 2:
            p = sub;  // Point to sub function
            break;
        case 3:
            p = multiply;  // Point to multiply function
            break;
        default:
            printf("Invalid choice\n");
            return 1;  // Exit if invalid choice
    }

    // Call the selected function using the pointer
    (*p)(a, b);  // Or you can also use p(a, b);

    return 0;
}

// Function definitions
void sum(int a, int b)
{
    int c = a + b;
    printf("Sum = %d\n", c);
}

void sub(int a, int b)
{
    int c = a - b;
    printf("Subtraction = %d\n", c);
}

void multiply(int a, int b)
{
    int c = a * b;
    printf("Multiplication = %d\n", c);
}

