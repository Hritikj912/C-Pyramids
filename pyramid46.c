#include<stdio.h>
int main()
{
	int i,j,k,l=65,n;
	printf("Enter no. of lines\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			 printf(" ");
		}
		
		for(k=1;k<=2*i-1;k++)
		{
			printf("%c",l);
			l++;
		}
		 printf("\n");
	}
	
}
