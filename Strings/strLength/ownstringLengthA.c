// string length using without strlib function



#include<stdio.h>
#include<stdlib.h>

int mystringlength(char str[]);

int main()
{
	char str[50];
	printf("Enter the string \n");
	scanf("%s",str);

	int x = mystringlength(str);
	printf("string length =%d \n",x);
}


int mystringlength(char str[])
{
	char i=0;
	while(str[i]!='\0')
	{
		i++;
	}

	return i;
}

