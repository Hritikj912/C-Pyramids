#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k,n;
	printf("ENTER NUMBER OF LINES\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			printf(" ");
		}
		for(k=1;k<=2*i-1;k=k+1)
		{
			printf("%d",i);
		}
		printf("\n");
	}
}
