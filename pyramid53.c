#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k,l,n;
	printf("ENTER NUMBER OF LINES\n");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
	for(j=n-i;j>=1;j--)
	{
		printf(" ");
	}
	l=2*i-1;
	for(k=l;k>=1;k--)
	{
		printf("%d",l);
	}
	printf("\n");
	
	}
}
