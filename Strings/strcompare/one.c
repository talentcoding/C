#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	char str1[20]="hello";
	char str2[20]="hello";
	int x = strcmp(str1,str2);
	if (x == 0)
	{
		printf("string Both are same \n");
	}
	else 
	{
		printf("Not same string\n");
	}
}
