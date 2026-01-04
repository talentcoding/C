// string copy without using string lib implement own function to copy string


#include<stdio.h>

char ownstringcopy(char str1[], char str2[]);

int main()
{
	char str1[30],str2[30];
	
	printf("Enter thestring str2\n");
	scanf("%s",str2);

	printf("string str2=%s  addr=%p\n",str2,str2);

	ownstringcopy(str1,str2);   //copy string from str2 to str1
	printf("copied string str2 to str1    str1=%s  addr=%p\n",str1,str1);			    
}


char ownstringcopy(char str1[], char str2[])
{
	char i=0;
	while(str2[i]!='\0')
	{
	 str1[i]=str2[i];
	 i++;
	}

	str1[i]='\0';

}
