#include<stdio.h>
void main()
{
	int i,j,k,n;
	printf("ENTER NO. OF LINES\n");
	scanf("%d",&n);
	for(i=65;i<65+n;i++)
	{
		for(j=65;j<=i;j++)
		{
			printf("%c",i);
		}
		printf("\n");
	}
	
}
