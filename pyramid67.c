#include<stdio.h>
void main()
{ int n,i,j,k;
	printf("Enter no. of lines\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(k=1;k<=i-1;k++)
		{
			printf(" ");
		}
		for(j=n+1-i;j>=1;j--)
		{
			printf("%c ",n-i+65);
		}
		printf("\n");
	}
}
