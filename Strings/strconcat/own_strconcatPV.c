// string concatination using own fuction without using inbuilt library function code in pointer version

#include<stdio.h>


char mystrcat(char *str1,char *str2);

int main()
{
	char str1[20]="earth";
	char str2[20]="isplanet";

	printf("string str1=%s\n",str1);
	printf("string str2=%s\n",str2);

	mystrcat(str1,str2);
	printf("string concated to str1=%s\n",str1);
}


char mystrcat(char *str1,char *str2)
{

	while(*str1!='\0')
	{
		str1++;
	}
	while(*str1=*str2)
	{
		str1++;
		str2++;
	}
	

}




