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
		for(j=n-i;j>=0;j--)
		{
			printf("%d ",n-i+1);
		}
		printf("\n");
	}
}
