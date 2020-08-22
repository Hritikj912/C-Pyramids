#include<stdio.h>
void main()
{
	int i,j,k,n;
	printf("ENTER NO. OF LINES\n");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		for(j=64+n;j>=65;j--)
		{
			printf("%c",j);
		}
		printf("\n");
	}
	
}
