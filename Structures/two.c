#include <stdio.h>
#include <stdlib.h>
#include<string.h>

struct student
{
    int rollno;
    char name[30];
};

int main()
{
    struct student *xyz;

    xyz = (struct student *)malloc(sizeof(struct student));

    xyz->rollno = 1;
    strcpy(xyz->name, "santhosh");

    printf("Rollno = %d\tName = %s\n", xyz->rollno, xyz->name);

    free(xyz);
    return 0;
}

