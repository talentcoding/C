#include <stdio.h>
#include <string.h>

void mystring_rev(char str[]);

int main()
{
    char str[20] = "HELLO";

    mystring_rev(str);

    printf("string reverse = %s\n", str);
    return 0;
}

void mystring_rev(char str[])
{
    int i = 0, j = strlen(str) - 1;
    char temp;

    while (i < j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}

