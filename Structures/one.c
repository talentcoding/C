#include<stdio.h>


struct student
{
	int rollno;
	char name[30];
};


int main()
{
	struct student xyz = {1,"santhosh"};
	printf("Rollno= %d \t Name= %s \n",xyz.rollno,xyz.name);
}


