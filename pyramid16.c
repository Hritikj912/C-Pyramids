#include<stdio.h>
void main()
{
	int i,j,k,n;
	printf("ENTER NO. OF LINES\n");
	scanf("%d",&n);
	for(i=65;i<n+65;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("%c",i);
		}
		printf("\n");
	}
	
}
