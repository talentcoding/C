#include <stdio.h>

int revnumber(int x);

int main()
{
    int x = 1234;

    printf("number = %d\n", x);
    int rev = revnumber(x);
    printf("reverse number = %d\n", rev);
    return 0;
}

int revnumber(int x)
{
    int rev = 0;
    int digit;

    while (x != 0)
    {
        digit = x % 10;      // get last digit
        rev = rev * 10 + digit;
        x = x / 10;          // remove last digit
    }
    return rev;
}





