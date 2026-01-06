// string concatination usin own fuction witout using library function using Array version

#include<stdio.h>


char mystrcat(char str1[],char str2[]);

int main()
{
	char str1[20]="earth";
	char str2[20]="planet";

	printf("string str1=%s\n",str1);
	printf("string str2=%s\n",str2);

	mystrcat(str1,str2);
	printf("string concated to str1=%s\n",str1);
}


char mystrcat(char str1[],char str2[])
{
char i=0,j=0;
	while(str1[i]!='\0')
	{
		i++;
	}
	while(str1[i]=str2[j])
	{
		i++;
		j++;
	}
	str1[i]='\0';

}




