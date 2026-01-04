#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	char str1[20]="earth";
	char str2[20]="planet";

	printf("string str1=%s\n",str1);
	printf("string str2=%s\n",str2);

	strcat(str1,str2);
	printf("string concated to str1=%s\n",str1);
}
