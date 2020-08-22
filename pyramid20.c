#include<stdio.h>
void main()
{
	int i,j,k,n;
	printf("ENTER NO. OF LINES\n");
	scanf("%d",&n);
	for(i=n+64;i>=65;i--)
	{
		for(j=65;j<n+65;j++)
		{
			printf("%c",i);
		}
		printf("\n");
	}
	
}
