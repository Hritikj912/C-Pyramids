#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k,n,l=1;
	printf("ENTER NUMBER OF LINES\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	for(j=1;j<=i-1;j++)
	{
		printf(" ");
	}
	for(k=2*(n-i)+1;k>=1;k--)
	{
		printf("%d",n-i+1);
	}
	printf("\n");
	
	}
}
