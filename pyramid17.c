#include<stdio.h>
void main()
{
	int i,j,k,n;
	printf("ENTER NO. OF LINES\n");
	scanf("%d",&n);
	for(i=65;i<n+65;i++)
	{
		for(j=65;j<n+65;j++)
		{
			printf("%c",j);
		}
		printf("\n");
	}
	
}
