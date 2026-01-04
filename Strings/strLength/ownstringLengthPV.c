// string length using without strlib function
//  write own string length function in pointer version



#include<stdio.h>


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
	char *p = str;
	while(*p!='\0')
	{
		p++;
	}

	return p-str;
}

