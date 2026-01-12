#include<stdio.h>



int main()
{

	int x,i=0,j=0;
	printf("enter the number \n");
	scanf("%d",&x);

	for(i=0;i<x;i++)
	{
		for(j=0;j<i;j++)
		{
			printf(" %d ",i);
	
		}
		printf("\n ");
	}

}
