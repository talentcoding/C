#include <stdio.h>
#include <string.h>
// Copy source buffer to the destination buffer
int MemCpy(void* dst, const void* src, unsigned int cnt)
{
char *pszDest =(char*)dst;
const char *pszSource =(char*)src;
while (cnt--)
{
*pszDest =*pszSource;
if ((*pszDest) != (*pszSource)) return -1;//Verfiy copy data
pszDest++; pszSource++;
}
*((char*)pszDest)='\0'; //after copy n byte copy null character in destination buffer.
return 0;//successfully copy cnt byte
}
int main()
{
const char *pszMessage  = "How Are you ?";//Source String
char aszDisplayMessage[32]={0}; //Destination string
short siLenString=0;
siLenString = strlen(pszMessage)+1; // length of source string
MemCpy(aszDisplayMessage, pszMessage,siLenString );//copy source character to destination
printf("Message = %s\n", aszDisplayMessage); //display output buffer
return 0;
}


