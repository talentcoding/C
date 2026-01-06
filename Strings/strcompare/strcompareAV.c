// stringcompare using own implementation array version 

#include<stdio.h>

int mystrcmp(char str1[], char str2[]);

int main()
{
	char str1[20]="HELLO";
	char str2[20]="HELLO";
	int x = mystrcmp(str1,str2);

	if(x==0)
	{
		printf("Strings are same\n");
	}
	else
	{
		printf("Not same \n");
	}
}

int mystrcmp(char str1[], char str2[])
{
	char i=0;
	for(i=0;str1[i]==str2[i];i++)
	{
		if(str1[i]=='\0')
		{
			return 0;
		}
	}
	return str1[i]-str2[i];

}




