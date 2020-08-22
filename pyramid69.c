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
		for(j=1;j<=n+1-i;j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
}
