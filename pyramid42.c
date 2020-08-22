#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k,z=65,n;
	printf("ENTER NUMBER OF LINES\n");
	scanf("%d",&n);
	for(i=65;i<=n+64;i++)
	{
		for(j=n+64;j>=i;j--)
		{
			printf(" ");
		}
		for(k=65;k<=z;k=k+1)
		{
			printf("%c",z);
		}
		z=z+2;
		printf("\n");
	}
}
